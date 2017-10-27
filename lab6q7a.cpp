#include <iostream>
using namespace std;
char str[10];
char str1[10];
int main () {
	int i=0;
	cout<<"Please enter the elements of a 10 membered string without spaces\n";
	while(i<10){
	cin>> str[i];
	i++;} 
	cout<< "Now we will copy the string\n";  		
	i=0;	
	while(i<10){
	str1[i]=str[i];
	i++;
	}
	cout<<"wasn't "<<str1<<" your input?\n" ;
        return 0;
}
