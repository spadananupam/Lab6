#include <iostream>
using namespace std;

int main()
{
    char  str[20], *p;

    cout << "Input about 10 characters of string\n";
    cin >> str;
    int len=0;
    for(;str[len]!='\0';len++);
    // Pointer variable refers to address of string 
    p=str+(len-1);
    cout<<"The required output:\n";
    for(int i=0;i<len;i++)
    {
    	cout<<p<<endl;
    	p--;
    }
    
    return 0;

