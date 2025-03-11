/*#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number : ";cin>>num;
	if(num>0){
		cout<<"The number is positive"<<endl;
	}
	
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number : ";cin>>num;
	if(num%2==0){
		cout<<"The number is even"<<endl;
	}
	
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter first number : ";cin>>num1;
	cout<<"Enter second number : ";cin>>num2;
	cout<<"Enter third number : ";cin>>num3;
	if(num1>num2 && num1>num3){
		cout<<num1<<"  is the largest number"<<endl;
	}
		if(num2>num3 && num2>num1){
		cout<<num2<<"  is the largest number"<<endl;
	}
		if(num3>num2 && num3>num1
		){
		cout<<num3<<"  is the largest number"<<endl;
	}
	
	return 0;
}*/
/*	#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter marks out of 100 : ";cin>>marks;
	
	if(marks>=90){
		cout<<"A+"<<endl;
	}
		if(marks>=80 && marks<90){
		cout<<"A"<<endl;
	}
		if(marks>=70 && marks<80){
		cout<<"B"<<endl;
	}
		if(marks>=60 && marks<70){
		cout<<"C"<<endl;
	}
		if(marks<60){
		cout<<"You are fail"<<endl;
	}
	
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	char signal;
	cout<<"Enter the color of signal : ";cin>>signal;
	
	if(signal=='R'){
		cout<<"Stop"<<endl;
	}
		if(signal=='G'){
		cout<<"Go"<<endl;
	}
		if(signal=='Y'){
		cout<<"Slowdown"<<endl;
	}
	
	
	return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    char grade;
    int yearsOfService;
    double basicSalary, bonus, grossSalary, tax, netSalary;

    
    cout << "Enter employee grade (A/B/C): ";cin >> grade;
    cout << "Enter years of service: ";cin >> yearsOfService;
    if (grade == 'A') {
        basicSalary = 50000;
    } 
	 if (grade == 'B') {
        basicSalary = 30000;
    } 
	 if (grade == 'C') {
        basicSalary = 20000;
    }
     cout << "Basic Salary: $" << basicSalary << endl;

    if (yearsOfService >= 10) {
        bonus = (10/100) * basicSalary; 
    }
	 if (yearsOfService >= 5) {
        bonus = (5/100) * basicSalary; 
    }
     cout << "Bonus: $" << bonus << endl;
     
    grossSalary = basicSalary + bonus;
     cout << "Gross Salary: $" << grossSalary << endl;
    
    if (grossSalary > 40000) {
        tax = 0.20 * grossSalary; 
    } 
	 if (grossSalary >= 30000 && grossSalary <= 40000) {
        tax = 0.10 * grossSalary; 
    }
     cout << "Tax Deducted: $" << tax << endl;

    netSalary = grossSalary - tax;

    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
/*#include<iostream>
using  namespace std;
int main(){
  // VARIABLE DECLARATION.
       double account_balance, withdrawal_amount, remaining_balance,salary,years_of_service;
       cout <<"AUTOMATED TELLER MACHINE" <<endl; //STREAM MANIPULATORS.
       // USER INPUT.
	   cout << "Please Enter Your Account Balance: ";
	   cin  >> account_balance;
	   cout << "Please Enter The Withdrawal Amount: ";
	   cin >> withdrawal_amount;
	   if (withdrawal_amount <= account_balance){ // CONDITION
	      remaining_balance = account_balance- withdrawal_amount ;
	      cout << "Your updated balance after deduction is: " << "Rs " << remaining_balance<< endl;
        }  
        else{
		  cout << "Insufficient Ballance!" << endl;
	    }
	    // CHECKING LOAN ELIGIBILITY.
		cout << "LOAN ELIGIBILITY"<<endl;
        cout << "Dear User Please Enter Your Salary: ";
        cin  >> salary;
        cout << "Dear User Please Enter Your years Of Service: ";
        cin  >> years_of_service;
	    if (salary >= 25000 || salary >= 20000 && years_of_service > 5){
		   cout << "Congratulations You Are Eligible For The Loan." <<endl;
	    }
	    else{ 
		 cout <<"Sorry! You Are Not Eligible For The Loan." <<endl;
		} 
		              
	  return 0;
}*/

