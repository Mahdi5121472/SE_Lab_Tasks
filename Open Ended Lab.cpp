//                                                   Inventory Managment System



#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
// Structure to store item details.
struct item{
	int id;
	string name;
	int quantity;
	double price;
};

 const int max_items = 100; // Maximum number of items.
item inventory[100]; // Array to store Inventory items.
int item_count = 0; // Keep track of number of items.

	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

// Function to add new item to inventory.
void additem(){
	if(item_count >= max_items){
     SetConsoleTextAttribute(hConsole,12);
		cout<<"Inventory is Full! Cannot add more items."<<endl;
		return;
	}
	// Entering new item.
	item newitem;
	newitem.id= item_count + 1;
	
	// Entering name of new item.
	     SetConsoleTextAttribute(hConsole,7);

	cout<<"Enter item name : ";
	cin>>newitem.name;
	
	// Entering quantity of new item.
	cout<<"Enter item quantity : ";
	cin>>newitem.quantity;
	while(newitem.quantity < 0){
		     SetConsoleTextAttribute(hConsole,12);

		cout<<"Invalid input! Quantity must be a non-negative number. Try again : ";
		cin>>newitem.quantity;
	}
	
	// Entering price of new item.
	     SetConsoleTextAttribute(hConsole,7);

	cout<<"Enter item price : ";
	cin>>newitem.price;
	while(newitem.price < 0){
		     SetConsoleTextAttribute(hConsole,12);

		cout<<"Invalid input! Price must be a non-negative number. Try again : ";
	}
	inventory[item_count] = newitem;
	item_count++;
	     SetConsoleTextAttribute(hConsole,10);

	cout<<"Item added successfully!";
}

// Function to display all items in inventory.
void displayInventory(){
	if(item_count == 0){
		SetConsoleTextAttribute(hConsole,12);

		cout<<"Inventory is empty.";
		return;
	}
	    SetConsoleTextAttribute(hConsole,6);

	cout<<"\nInventory List "<<endl;
	    SetConsoleTextAttribute(hConsole,11);

	cout<<"ID\tName\tQuantity\tPrice"<<endl;
	for(int i=0;i<item_count;i++){
		cout<<inventory[i].id<<setw(12)<<right<<inventory[i].name<<setw(8)<<right<<inventory[i].quantity<<setw(14)<<"Rs. "<<right<<inventory[i].price<<endl;
		
	}
}

// Function to search an item by ID.
void searchItem() {
    int id;
         SetConsoleTextAttribute(hConsole,7);

    cout << "Enter item ID to search: ";
    cin >> id;
    
    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == id) {
        	SetConsoleTextAttribute(hConsole,10);
            cout << "Item Found Successfully"<<endl;
            
			SetConsoleTextAttribute(hConsole,9);
            cout<<"ID\tName\tQuantity\tPrice"<<endl;
            
            SetConsoleTextAttribute(hConsole,7);
		cout<<inventory[i].id<<setw(12)<<right<<inventory[i].name<<setw(8)<<right<<inventory[i].quantity<<setw(14)<<"Rs. "<<right<<inventory[i].price<<endl;
            return;
        }
    }
        SetConsoleTextAttribute(hConsole,12);

    cout << "Item not found!" << endl;
}

// Funtion to remove an item by ID.
void removeItem() {
    int id;
        SetConsoleTextAttribute(hConsole,7);

    cout << "Enter item ID to remove: ";
    cin >> id;
    
    for (int i = 0; i < item_count; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < item_count - 1; j++) {
            inventory[j] = inventory[j + 1];
            }
            item_count--;
            SetConsoleTextAttribute(hConsole,10);

            cout << "Item removed successfully!" << endl;
            return;
        }
    }
        SetConsoleTextAttribute(hConsole,12);

    cout << "Item not found!" << endl;
}

int main() {
    int choice;
    do {
    	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    	SetConsoleTextAttribute(hConsole,6);
        cout<<"\n"<<setw(70)<<right<< "Inventory Management System" << endl;
        SetConsoleTextAttribute(hConsole,11);
        cout<<setw(60)<<right << "1. Add Item" << endl;
        cout<<setw(69)<<right << "2. Display Inventory" << endl;
        cout<<setw(63)<<right << "3. Search Item" << endl; 
        cout<<setw(63)<<right << "4. Remove Item" << endl;
        cout<<setw(56)<<right << "5. Exit" << endl;
        
        SetConsoleTextAttribute(hConsole,7);
        cout << "Enter your choice: ";
        
        cin >> choice;
        
        switch (choice) {
            case 1: 
			additem();
			 break;
            case 2:
			 displayInventory();
			 break;
            case 3:
			 searchItem();
			 break;
            case 4:
			 removeItem();
			 break;
            case 5:
            SetConsoleTextAttribute(hConsole,10);

			 cout << "Exiting program..." << endl;
			SetConsoleTextAttribute(hConsole,7);

			 break;
            default:
            SetConsoleTextAttribute(hConsole,12);

			 cout << "Invalid choice! Please select between 1 and 5." << endl;
        }
    } while (choice != 5);
    
    return 0;
}

