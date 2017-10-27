#include<iostream>
using namespace std;
int main(){
        int x=1;
        float y=2.12;
        bool z=1;

        int *p=&x;
        float *q=&y;
        bool *r=&z;
        cout<< "The sizes of the following variables are:\n";   
        cout << "Int: "<<sizeof(int)<<" it's pointer is: "<<sizeof(int*)<<endl;
        cout << "Float: "<<sizeof(float)<<" it's pointer is: "<<sizeof(float*)<<endl;
        cout << "Bool: "<<sizeof(bool)<<" it's pointer is: "<<sizeof(bool*)<<endl;
        return 0;
}       

