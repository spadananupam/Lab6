#include<iostream>
using namespace std;
int main(){
	string s;
	int i=0;
	cout<< "Please enter the string \n";
	cin>>s;
	while(s[i]!='\0'){
		i++;
	}
	cout << "The length of the sring is: "<<i<<endl;
	return 0;
}
