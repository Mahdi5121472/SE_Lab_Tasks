/*#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number : ";cin>>num;
	if(num>0){
		cout<<"The number is positive"<<endl;
		}else if(num<0){
			cout<<"The number is negative"<<endl;
			}else{
				cout<<"The number is zero"<<endl;
			}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	int temp;
	cout<<"Enter Temperature in Celcius : ";cin>>temp;
	if(temp>=40){
		cout<<"You should stay at home because its extremely hot"<<endl;
		}else if(temp>=30 && temp<=39){
			cout<<"You should drink plenty of water to stay hydrated"<<endl;
			}
			else if(temp>=20 && temp<=29){
			cout<<"The weather is pleasent and suitable for outdoor activitites"<<endl;
			}else{
				cout<<"You should wear warm clothes to stay comfortable in the cooler weather"<<endl;
			}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main(){
	  string user_name="admin";
	  string password="12345";
	cout<<"Enter Username : ";cin>>user_name;
		cout<<"Enter Password : ";cin>>password;
	if(user_name=="admin" && password=="12345"){
		cout<<"Access Granted"<<endl;
		}else if(user_name=="admin" && password!="12345"){
			cout<<"Wrong password"<<endl;
			}
			else{
				cout<<"User not found"<<endl;
			}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
	  int age,annual_income;
	cout<<"Enter age : ";cin>>age;
		cout<<"Enter Ammual Income : ";cin>>annual_income;
	if(age>=18){
		if(annual_income>=30000){
			cout<<"Congratulations! you are eligible for a loan"<<endl;
		}else
		cout<<"You meet the age requirement but are not eligible for a loan because your income is below $30,000"<<endl;
	}else{
				cout<<"You are not eligible for a loan because you are under 18 years of age"<<endl;
			}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main(){
	  string user_name="admin";
	  string password="password123";
	  string role;
	cout<<"Enter Username : ";cin>>user_name;
		cout<<"Enter Password : ";cin>>password;
	if(user_name=="admin" && password=="password123"){
		cout<<"Authentication Successful"<<endl;
		cout<<"Enter role : ";cin>>role;
		if(role=="Admin"){
			cout<<"Full Access"<<endl;
		}else if(role=="Guest"){
			cout<<"Limitted Access"<<endl;
		}else{
			cout<<"No Access"<<endl;
		}
		}else{
				cout<<"Authticatiion Failed. Access Denied"<<endl;
			}
	return 0;
}*/




/*#include <iostream>
using namespace std;
int main() {
    double subject1, subject2, subject3, totalMarks, percentage;
    char grade1, grade2, grade3;

    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;
    cout << "Enter marks for subject 3: ";
    cin >> subject3;

    if (subject1 < 60 || subject2 < 60 || subject3 < 60) {
        cout << "Failed" << endl;
        return 0;
    }

    totalMarks=subject1+subject2+subject3;
    percentage= (totalMarks/300) * 100;

    if (subject1 >= 90) {
        grade1 = 'A';
    } else if (subject1 >= 80) {
        grade1 = 'B';
    } else if (subject1 >= 70) {
        grade1 = 'C';
    } else if (subject1 >= 60) {
        grade1 = 'D';
    } else {
        grade1 = 'F';
    }

    if (subject2 >= 90) {
        grade2 = 'A';
    } else if (subject2 >= 80) {
        grade2 = 'B';
    } else if (subject2 >= 70) {
        grade2 = 'C';
    } else if (subject2 >= 60) {
        grade2 = 'D';
    } else {
        grade2 = 'F';
    }

    if (subject3 >= 90) {
        grade3 = 'A';
    } else if (subject3 >= 80) {
        grade3 = 'B';
    } else if (subject3 >= 70) {
        grade3 = 'C';
    } else if (subject3 >= 60) {
        grade3 = 'D';
    } else {
        grade3 = 'F';
    }
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade for Subject 1: " << grade1 << endl;
    cout << "Grade for Subject 2: " << grade2 << endl;
    cout << "Grade for Subject 3: " << grade3 << endl;

    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && totalMarks >= 270) {
        cout << "Eligible for Merit Scholarship" << endl;
    } else if ((grade1 == 'A' || grade1 == 'B') && (grade2 == 'A' || grade2 == 'B') && (grade3 == 'A' || grade3 == 'B') && totalMarks >= 240) {
        cout << "Eligible for Regular Scholarship" << endl;
    } else {
        cout << "Not Eligible for Scholarship" << endl;
    }

    return 0;
}*/
