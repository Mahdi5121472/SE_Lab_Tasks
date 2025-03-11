#include<iostream>
using namespace std;
int main(){
//	TASK 01 : FIND THAT THE GIVEN INTEGER IS EVEN OR ODD
	int x;
	cout<<"Enter an integer : " ; cin>>x;
	(x%2==0)? cout<<"The number "<< x <<" is even\n" :cout<<"The number "<< x <<" is odd\n";

//	TASK 02 : ENTER THE AGE TO FIND IN WHICH CATEGORY THE AGE LIE
	int age;
	cout<<"Enter age : ";cin>>age;
    (age<13) ? cout<<"age "<< age <<" falls under the category: Child\n": (age>= 13 && age<=19) ? cout<<"age "<< age <<" falls under the category: Teenager\n": cout<<"age "<< age <<" falls under the category: Adult\n";

//	TASK 03 : DETERMINE THE ACCOUNT TYPE AND CHECK WHETHER HE/SHE IS LOYAL OR NOT
	int amount;
	bool loyal;
	cout<<"Enter account balance : " ; cin>>amount;
	(amount<100)? cout<<"low Balance Account\n" :( amount>=100 && amount<=500 )?cout<<"Standard Account\n":cout<<"Premium Account\n";
		cout<<"Are you loyal : ";cin>>loyal;
	(loyal==1 && amount>200)?cout<<"eligible for special offer":cout<<" not eligible for special offer";
	return 0;
	
}
