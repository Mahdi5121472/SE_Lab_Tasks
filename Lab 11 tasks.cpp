/*#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,20,30,40,50};
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
	int N;
	int arr[N];
	cout<<"Enter the size of array : ";cin>>N;
	for(int i=0;i<N;i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}for(int j=N-1;j>=0;j--){
		cout<<arr[j]<<endl;
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
	double arr[5]={10,20,30,40,50},sum=0,average,size;
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	cout<<"The sum is : "<<sum<<endl;
	size=sizeof(arr)/sizeof(arr[3]);
	average=sum/size;
	cout<<"The average is : "<<average;
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,20,30,40,50};
	int length;
	length=sizeof(arr)/sizeof(arr[3]);
	cout<<"The length is : "<<length;
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
	int N;
	int arr[N];
	cout<<"Enter the size of array : ";cin>>N;
	for(int i=0;i<N;i++){
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}int largest=arr[0];
	for(int i=1;i<N;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"The largest number in array is : "<<largest;
	return 0;
}*/
