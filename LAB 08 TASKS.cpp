/*#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum,difference,multiply,division,modulus;
	char op;
	cout<<"Enter first number : ";cin>>num1;
		cout<<"Enter second number : ";cin>>num2;
	cout<<"Enter operator : ";cin>>op;
	switch(op){
		case '+':
			sum=num1+num2;
			cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
			break;
			case '-':
			difference=num1-num2;
			cout<<num1<<" - "<<num2<<" = "<<difference<<endl;
			break;
			case '*':
			multiply=num1*num2;
			cout<<num1<<" * "<<num2<<" = "<<multiply<<endl;
			break;
			case '/':
			division=num1/num2;
			cout<<num1<<" / "<<num2<<" = "<<division<<endl;
			break;
			case '%':
			modulus=num1%num2;
			cout<<num1<<" % "<<num2<<" = "<<modulus<<endl;
			break;
			default:
				cout<<"Invalid operator"<<endl;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";cin>>num;
	switch(num){
		case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
				cout<<"Tuesday"<<endl;
				break;
				case 3:
				cout<<"Wednesday"<<endl;
				break;
				case 4:
				cout<<"Thursday"<<endl;
				break;
				case 5:
				cout<<"Friday"<<endl;
				break;
				case 6:
				cout<<"Saturday"<<endl;
				break;
				case 7:
				cout<<"Sunday"<<endl;
				break;
				default:
					cout<<"Invalid input"<<endl;
	}
	
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int L,W,area;
	double area_of_circle,area_of_rectangle,area_of_triangle;
	const double Pi=3.14;
	cout<<"Enter Length  : ";cin>>L;
		cout<<"Enter Width : ";cin>>W;
	cout<<"Whose area you want to find : ";cin>>area;
	switch(area){
		case 1:
			area_of_circle=Pi*L*L;
			cout<<"The area of circle is : "<<area_of_circle;
			break;
			case 2:
			area_of_rectangle=L*W;
			cout<<"The area of rectangle is : "<<area_of_rectangle;
			break;
			case 3:
			area_of_triangle=L*W*0.5;
			cout<<"The area of triangle is : "<<area_of_triangle;
			break;
			default:
				cout<<"Invalid shape"<<endl;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int pkr,inr,euro,amount,currency;
	cout<<"Enter your amount : $ ";cin>>amount;
	cout<<"Enter your currency : ";cin>>currency;
	switch(currency){
		case 1:
			pkr=amount*277.39;
			cout<<"The amount in PKR is : "<<pkr;
			break;
			case 2:
			inr=amount*86.43;
			cout<<"The amount in INR is : "<<inr;
			break;
			case 3:
			euro=amount*0.96;
			cout<<"The amount in EURO is : "<<euro;
			break;
			default:
				cout<<"Invalid currency"<<endl;
	}
	return 0;
}*/

