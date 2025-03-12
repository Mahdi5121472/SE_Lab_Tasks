/*#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Square root of " << num1 << " = " << sqrt(num1)<< endl;
    cout << "Square root of " << num2 << " = " << sqrt(num2) << endl;

    cout << "Absolute value of " << num1 << " = " << abs(num1) << endl;
    cout << "Absolute value of " << num2 << " = " << abs(num2) << endl;

    cout << "Sine of " << num1 << " = " << sin(num1) << endl;
    cout << "Cosine of " << num1 << " = " << cos(num1) << endl;
    cout << "Sine of " << num2 << " = " << sin(num2) << endl;
    cout << "Cosine of " << num2 << " = " << cos(num2) << endl;

    cout << num1 << " raised to the power of 3 = " << pow(num1, 3) << endl;
    cout << num2 << " raised to the power of 3 = " << pow(num2, 3) << endl;

    return 0;
}*/















/*#include <iostream> 
using namespace std; 
 
// Function to display a welcome message 
void displayMessage() { 
    cout << "Hello, Welcome to C++ Functions!" << endl; 
} 
 
int main() { 
    // Calling the function 
    displayMessage(); 
     
    return 0; 
}*/




/*#include <iostream> 
using namespace std; 
 
void checkEvenOdd(int num) { 
    if (num % 2 == 0) 
        cout << num << " is Even." << endl; 
    else 
        cout << num << " is Odd." << endl; 
} 
 
int main() { 
    int number; 
 
    // Taking input from the user 
      cout<<"Even Odd  Checker"<<endl;
    cout << "Enter a number: "; 
    cin >> number; 
    // Calling function 
    checkEvenOdd(number); 
    return 0; 
}*/





/*#include <iostream> 
using namespace std; 
 
int factorial(int num) { 
    int fact = 1; 
 
    for (int i = 1; i <= num; i++) { 
        fact *= i; 
    } 
 
    return fact; 
} 
 
int main() { 
    int number; 
    cout<<"Factorial Calculator"<<endl;
    
    cout << "Enter a number: "; 
    cin >> number; 
    if (number < 0) { 
        cout << "\nFactorial of a negative number dont exist." << endl; 
    } else { 
        
        cout << "\nFactorial of " << number << " is " << factorial(number) << endl; 
    } 
    return 0; 
}*/






/*#include <iostream> 
#include <iomanip>
using namespace std; 

void showMenu() { 
   cout << setw(15) << "Simple Calculator" << endl; 
    cout << "1. Addition (+)" << endl; 
   cout << "2. Subtraction (-)" << endl; 
    cout << "3. Multiplication (*)" << endl; 
   cout << "4. Division (/)" << endl; 
   cout << "5. Exit" << endl; 
} 

 
double add(double a, double b) { 
   return a + b; 
} 
 
double subtract(double a, double b) { 
    return a - b; 
} 

double multiply(double a, double b) { 
   return a * b; 
   } 
 
double divide(double a, double b) { 
   if (b == 0) { 
       cout << "Error! Division by zero is not allowed." << endl; 
       return 0; 
   } 
   return a / b; 
} 

int main() { 
    int choice; 
    double num1, num2, result; 
 
    do { 
        showMenu(); // Display menu using function 
        cout << "Enter your choice (1-5): "; 
        cin >> choice; 
 
        if (choice >= 1 && choice <= 4) { 
            // Input two numbers 
            cout << "Enter first number: "; 
            cin >> num1; 
            cout << "Enter second number: "; 
            cin >> num2; 
 
            // Perform the selected operation 
            switch (choice) { 
                case 1: 
                    result = add(num1, num2); 
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl; 
                    break; 
                case 2: 
                    result = subtract(num1, num2); 
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl; 
                    break; 
                case 3: 
                    result = multiply(num1, num2); 
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl; 
                    break; 
                case 4: 
                    result = divide(num1, num2); 
                    if (num2 != 0) 
                        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl; 
                    break; 
            } 
        }  
        else if (choice == 5) { 
            cout << "Exiting Calculator... Thank you!" << endl; 
        }  
        else { 
            cout << "Invalid choice! Please select a valid option (1-5)." << endl; 
        } 
    } while (choice != 5); // Loop until user chooses to exit 
 
    return 0; 
}*/











/*#include <iostream> 
#include <iomanip>
#include<ctime>    
 
using namespace std; 

void displayMenu() { 
    cout << setw(20) << "Restaurant Menu " << endl; 

    cout << "1. Burger        - $5.00" << endl; 
   cout << "2. Pizza         - $8.50" << endl; 
    cout << "3. Pasta         - $7.00" << endl; 
    cout << "4. Sandwich      - $4.50" << endl; 
   cout << "5. Coffee        - $3.00" << endl; 
 

    cout << "6. Exit & Generate Bill" << endl; 
 
} 
 
double calculateItemCost(int item, int quantity) { 
   double price = 0; 
   switch (item) { 
        case 1: price = 5.00; break; 
        case 2: price = 8.50; break; 
        case 3: price = 7.00; break; 
       case 4: price = 4.50; break; 
        case 5: price = 3.00; break; 
    } 
    return price * quantity; 
} 
 
double calculateFinalBill(double subtotal, double &tax, double &discount) { 
    // Tax conditions 
    if (subtotal >= 30) 
        tax = subtotal * 0.10; // 10% tax 
    else 
        tax = subtotal * 0.05; // 5% tax 
 
    // Discount condition (if order exceeds $50) 
    if (subtotal > 50) 
        discount = subtotal * 0.10; // 10% discount 
    else 
        discount = 0; 
 
    return subtotal + tax - discount; 
} 
 
void displayTime() { 
    time_t now = time(0); 
    tm *ltm = localtime(&now); 
 
    cout << "Bill Generated on: " << 1900 + ltm->tm_year << "-" 
         << 1 + ltm->tm_mon << "-" 
         << ltm->tm_mday << " " 
         << ltm->tm_hour << ":" 
         << ltm->tm_min << ":" 
         << ltm->tm_sec << endl; 
} 
 
int main() { 
    int choice, quantity; 
    double totalBill = 0, itemCost, tax = 0, discount = 0; 
 
    do { 
        displayMenu(); 
        cout << "Enter item number (1-5) or 6 to exit: "; 
        cin >> choice; 
 
        if (choice >= 1 && choice <= 5) { 
            cout << "Enter quantity: "; 
            cin >> quantity; 
 
            itemCost = calculateItemCost(choice, quantity); 
            totalBill += itemCost; 
 
            cout << " Item added! Cost: $" << fixed << setprecision(2) << itemCost << endl; 
        }  
        else if (choice != 6) { 
            cout << "Invalid choice! Please select a valid option." << endl; 
        } 
 
    } while (choice != 6); // Exit when user selects 6 
 
    double finalAmount = calculateFinalBill(totalBill, tax, discount); 
 
     
    displayTime(); 
 
    cout << "Subtotal: $" << fixed << setprecision(2) << totalBill << endl; 
 
    cout << "Tax Applied: $" << fixed << setprecision(2) << tax << endl; 
 
    cout << "Discount Applied: -$" << fixed << setprecision(2) << discount << endl; 
 
    cout << "Final Amount (after tax/discounts): $" << finalAmount << endl; 
 
    cout << "Thank you for dining with us! Have a great day! " << endl; 
 
    return 0; 
} */







