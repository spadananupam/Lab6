
#include<iostream>
using namespace std;
 
int main()
{
 char a[25],b[25];
 int cnt=1,i=0;
 cout<<"\n ENTER THE STRING 1 : ";
 cin>>a;
 cout<<"\n ENTER THE STRING 2 : ";
 cin>>b;

 while(a[i]!='\0' && b[i]!='\0')
 {
  if(a[i]==b[i])
  {
   cnt++;
  }
  else
  {if (a[i]>b[i])
	{cout << "first one is bigger\n";}
   else {cout<< "The second one is bigger\n";}
	break;
  }
  i++;
 }

 if(i==cnt)
 {
  int n;
  cout<<"\n\n THE GIVEN TWO STRINGS ARE ONE & SAME ";
 }

 return 0;
}
