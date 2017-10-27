#include <iostream>

using namespace std;

int main () {
char name[7] = {'s', 'p', 'a', 'n', 'd', 'a','n'};
   
		int i=0;

	while (i<7){
		
		cout<<name[i];
		i++;}
	//using pointers
	i=0;
	cout<< "\nThe name is: \n";
	while (i<7){
		 char *p=&name[i];
		 cout<<*p;
		 p++; 
		 i++;}
cout<<endl;

   return 0;
}
