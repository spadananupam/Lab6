#include<iostream>
using namespace std;
int arr[10];
int main(){
	int i=0;
	while (i<10){
		cout<< "\nPlease enter the "<<i+1<<" numbered element\n";
		cin >> arr[i];
		i++;}
	i=0;
	while (i<10){
		cout<<"\nThe "<<i+1<<" numbered element is \n";
		cout<<arr[i];
		i++;}
	//using pointers
	i=0;
	cout<< "The values in the array are: \n";
	while (i<10){
		 int *p=&arr[i];
		 cout<<*p<<" ";
		 p++; 
		 i++;}
cout<<endl;	
return 0;}
