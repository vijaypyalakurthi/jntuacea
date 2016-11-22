#include<iostream>
using namespace std;
int main()
{
int a[10],n,i,j,temp;
cout<<"enter the no of elements:\n ";
cin>>n;
cout<<"enter the array elements:\n ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
for(i=0;i<n;i++)
{
for(j=j+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout <<"\nthe ascending order of array elements are : ";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
return 0;
}
