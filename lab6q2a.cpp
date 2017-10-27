#include<iostream>
using namespace std;
int main(){
        int a=23,b;
        cout << "the initialized value of a is 23\n";
        int* p=&a;
        b=*p;
        cout << "Value of a: "<<a<<"\n"<<"Value of b: "<<b<<endl<<"value of pointer is: "<<p<<endl;
        return 0;
}      
                    
