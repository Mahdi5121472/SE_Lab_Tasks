/*#include<iostream>
#include<string>
using namespace std;
int main(){
string username,password;
int balance=1000,amount,choice=0;
cout<<"Enter your name : ";cin>>username;
cout<<"Enter password : ";cin>>password;
while(choice!=4){
	cout<<"\n Simple banking system menu : \n";
	cout<<" 1. Deposite Money\n";
	cout<<"2. Withdraw Money\n";
	cout<<"3. Check Balance\n";
	cout<<"4. Exit\n";
	cout<<"Enter your choice : ";cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the amount to deposite : ";cin>>amount;
			if(amount>0){
				balance+=amount;
				cout<<"Amount deposited successfully.\n";
			}else{
				cout<<"Invalid amount please enter a positive value";
				}
				break;
			
	
	case 2:
		cout<<"Enter the amount to withdraw : ";cin>>amount;
		if(amount>0 && amount<=balance){
			balance-=amount;
			cout<<"Amount withdrawn successfully.\n";
		}else if(amount>balance){
			cout<<"Insufficient balance.\n";
		}else{
		cout<<"Invalid amount please enter a positive value";	
		}
		break;
	case 3:
	cout<<"Current balance : $"<<balance<<"\n";
	break;
	case 4:
	cout<<"Thank you for using the banking system. Good Bye!\n";	
	return 0;
	default:{
		cout<<"Invalid choice.\n";
		break;
	}	
	
	}
	
}

}*/

/*#include<iostream>
#include<string>
using namespace std;
int main(){
int n=0,N;
cout<<"Enter the number : ";cin>>N;
while(n<N){
	n++;
cout<<n<<endl;
}

}*/

/*#include<iostream>
#include<string>
using namespace std;
int main(){
int num1,num2=0,num3;
cout<<"Enter the number : ";cin>>num1;
while(num2<10){
	num2++;
	num3=num1*num2;
	cout<<"\n"<<num1<<"*"<<num2<<"="<<num3<<endl;
	
	
	
}
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main(){
int num;
cout<<"Enter the number : ";cin>>num;
while(num<0){
	cout<<"You entered a negative number!\n Re-enter the number :  "<<endl;
	cout<<"Enter the number : ";cin>>num;
	
}
cout<<"The number is : "<<num<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
int a=0,sum=0;
while(a<=4){
	a++;
	sum+=a;
	
}
cout<<"The number is : "<<sum<<endl;
return 0;
}*/

/*	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,6);
	cout<<endl<<setw(65)<<setfill(' ')<<"Restaurant Menu\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	char MainMenu,ch;
	int subMenu;
	double amount, Total;
	do{
		SetConsoleTextAttribute(hConsole,7);
		cout<<setw(50)<<setfill(' ')<<"\t\t B. Breackfast\n";
		cout<<setw(50)<<setfill(' ')<<"\t\t L. Lunch \n";
		cout<<setw(50)<<setfill(' ')<<"\t\t D. Dinner \n: ";
		SetConsoleTextAttribute(hConsole,7);
		cin>>MainMenu;
		switch(MainMenu){
			case 'B':
			case 'b':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Breakfats We Have following Menu:";
				cout<<"\n\t\t\t\t\t 1. Anda Paratha (RS.40)";
				cout<<"\n\t\t\t\t\t 2. Nan Channy (RS.60)";
				cout<<"\n\t\t\t\t\t 3. Siri Paye (RS.150)";
				cout<<"\n\t\t\t\t\t 4. Tea (RS.15)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much Anda Paratha you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+= amount*40;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much Nan Channy you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*60;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much Siri Paye you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*150;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much Tea you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*15;
						break;
					
			}
				break;
			case 'L':
			case 'l':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Lunch We Have following Menu:";
				cout<<"\n\t\t\t\t\t 1. Chicken Karahi (RS.1050/kg)";
				cout<<"\n\t\t\t\t\t 2. Mutton Karahi (RS.1800/kg)";
				cout<<"\n\t\t\t\t\t 3. Egg Fried Rice (RS.450/plate)";
				cout<<"\n\t\t\t\t\t 4. BBQ (RS.1050/dozen)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Chicken Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" what amount of Mutton Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Egg Fried Rice would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*450;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of BBQ would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
				}		
				break;
			case 'D':
			case  'd':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Dinner We Have Following Menu: ";
				cout<<"\n\t\t\t\t\t 1. Chicken Karahi (RS.1050/kg)";
				cout<<"\n\t\t\t\t\t 2. Mutton Karahi (RS.1800/kg)";
				cout<<"\n\t\t\t\t\t 3. Egg Fried Rice (RS.450/plate)";
				cout<<"\n\t\t\t\t\t 4. BBQ (RS.1050/dozen)";
				cout<<"\n\t\t\t\t\t 5. Saji (RS.800/kg)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amout of Chicken Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" what amount of Mutton Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Egg Fried Rice would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*450;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"What amount of BBQ would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 5:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"What amount of Saji would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*800;
						break;
						}
						break;
			default:
				SetConsoleTextAttribute(hConsole,4);
				cout<<" \n\n\t\t\t Invalid data !!!\n \t\t\t please enter correct data."<<endl;
				SetConsoleTextAttribute(hConsole,7);
					return 0;
		}
		
		cout<<" \t\t\t\t\t Do you want to order somting else ?";
		cout<<"\n\t\t\t\t\t press y for (yes), n for (no) :";
		cin>>ch;
		cout<<endl;
		cout<<endl;
	}
	while(ch!='n');
	
	cout<<setw(70)<<setfill(' ')<<" Your Total bill is ="<<Total<<endl;
	cout<<"\n";
	cout<<"\n";*/
	/*#include<iostream>
	using namespace std;
	int main(){
	int password ;
	
	do{
		cout<<" Enter password :";
	cin>>password;
		cout<<" worng password"<<endl;
	}
	while(password!=1234);
	
	cout<<" successflly loged in";
	
	return 0;
}*/
