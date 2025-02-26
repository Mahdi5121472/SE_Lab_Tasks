#include<iostream>
#include<iomanip>
using namespace std;
int  main(){
//	TASK 01
	double item1=12.95,item2=24.95,item3=6.95,item4=14.95,item5=3.95,subtotal,sales_tax,total,average;
	cout<<"price of item 1 : $"<<item1<<endl;
		cout<<"price of item 2 : $"<<item2<<endl;
			cout<<"price of item 3 : $"<<item3<<endl;
				cout<<"price of item 4 : $"<<item4<<endl;
					cout<<"price of item 5 : $"<<item5<<endl;
					subtotal=item1+item2+item3+item4+item5;
					cout<<"Subtotal : $"<<subtotal<<endl;
					sales_tax=subtotal*6/100;
					cout<<"Sales Tax (6%) : $"<<sales_tax<<endl;
					total=subtotal+sales_tax;
					cout<<"Total : $"<<total<<endl;
//TASK 02
 double a=85.5,b=90.75,c=88.25;
 cout<<fixed<<setprecision(2)<<endl;
 average=a/3+b/3+c/3;
 cout<<"The average of "<<a<<","<<b<<","<<c<<"="<<average<<endl;
//TASK 03
int number1,number2,addition,subtraction,multiplication,division,moduls;
cout<<"Enter two numbers : "<<endl;
cout<<"Number 1:"; cin>>number1;
cout<<"Number 2:"; cin>>number2;
addition=number1+number2;
cout<<"\tAddition:"<<endl;
cout<<"\t\t"<<number1<<" + "<<number2<<" = "<<addition<<endl;
subtraction=number1-number2;
cout<<"\tSubtraction:"<<endl;
cout<<"\t\t"<<number1<<" - "<<number2<<" = "<<subtraction<<endl;
multiplication=number1*number2;
cout<<"\tMultiplication:"<<endl;
cout<<"\t\t"<<number1<<" * "<<number2<<" = "<<multiplication<<endl;
division=number1/number2;
cout<<"\tDivision:"<<endl;
cout<<"\t\t"<<number1<<" / "<<number2<<" = "<<division<<endl;
moduls=number1 % number2;
cout<<"\tModuls:"<<endl;
cout<<"\t\t"<<number1<<" % "<<number2<<" = "<<moduls<<endl;
//TASK04
double weight,height,BMI;
cout<<"BMI Calculator"<<endl;
cout<<"--------------"<<endl;
cout<<"Enter your weight in kilogram:"; cin>>weight;
cout<<"Enter your height in meters;"; cin>>height;
BMI=weight/(height*height);
cout<<"Your BMI is:"<<BMI<<endl;
//TASK 05
int distance,efficiency,fuel_cost,trip_cost;
cout<<"Trip Cost Estimtor"<<endl;
cout<<"------------------"<<endl;
cout<<"Enter distance of the trip in kilometers:";cin>>distance;
cout<<"Enter vehicle\'s fuel efficiency(km per liter):";cin>>efficiency;
cout<<"Enter fuel cost per liter:";cin>>fuel_cost;
trip_cost=(distance/efficiency)*fuel_cost;
cout<<"Total trip cost: RS "<<trip_cost<<endl;




	return 0;
}
