#include<iostream>  
using namespace std;
int main()
{
int no,rem=0,sum=0;
cout<<"enter no value:";
cin>>no;
while (no>0)
{
rem=no%10;
sum=sum+rem;
no=no/10;
}
cout<< "sum of individual digits=  "<<sum;
return 0;
}
