//#include<iostream>
//#include<string>
//using namespace std;
//struct nameStudent{
//	string FirstName;
//	string LastName;
//	int RollNumber;
//	double Marks;
//	void displayStudentInfo(){
//		cout<<"Full name of student is :"<<FirstName<<LastName<<endl;
//		cout<<"Marks of student is : "<<Marks<<endl;
//	}
//
//};
//int main(){
//	nameStudent s;
//	s.FirstName="Mahdi Ali";
//	s.LastName=" Nahvi";
//	s.RollNumber=16;
//	s.Marks=465;
//	s.displayStudentInfo();
//}
//#include<iostream>
//#include<string>
//using namespace std;
//struct nameStudent{
//	string FirstName;
//	string LastName;
//	int RollNumber;
//	double Marks;
//	void displayStudentInfo(){
//		cout<<"Full name of student is :"<<FirstName<<LastName<<endl;
//		cout<<"Marks of student is : "<<Marks<<endl;
//	}
//
//};
//int main(){
//	nameStudent s[4];
//	for(int i=0;i<4;i++){
//		cout<<"Enter your first name : ";
//		cin>>s[i].FirstName;
//			cout<<"Enter your last name :  ";
//		cin>>s[i].LastName;
//			cout<<"Enter your marks : ";
//		cin>>s[i].Marks;
//		
//	}for(int i=0;i<4;i++){
//		s[i].displayStudentInfo();
//	}
//
//
//}
#include<iostream>
#include<string>
using namespace std;
struct nameStudent{
	string FirstName;
	string LastName;
	int RollNumber;
	double Marks;
	void displayStudentInfo(){
		cout<<"Full name of student is :"<<FirstName<<LastName<<endl;
		cout<<"Marks of student is : "<<Marks<<endl;
	}

};
int main(){
	nameStudent s[4];
	nameStudent *ptr;
	ptr=s;
	for(int i=0;i<4;i++){
		cout<<"Enter your first name : ";
		cin>>ptr->FirstName;
			cout<<"Enter your last name :  ";
		cin>>ptr->LastName;
			cout<<"Enter your marks : ";
		cin>>ptr->Marks;
		
	}for(int i=0;i<4;i++){
		ptr->displayStudentInfo();
	}


}
