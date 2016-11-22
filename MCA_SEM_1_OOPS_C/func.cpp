#include <iostream> 
using namespace std;
template <class T>
void maxmin(T a[],int n)
{	
int i;
T temp;
for(i=0;i<n;i++)
for(int j=j+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
cout<<"maximum=  "<<a[n-1]<<"\n"<<"minimum=  "<<a[0]<<"\n";
cout<<"sorted list is :\n";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
int main()
{
int a[50],ch,n;
double d[50];

char c[50];
cout<<"1.integer\n";
cout<<"2.characters\n";
cout<<"enter corresponding index example enter 1 for integers ";
cin>>ch;
cout<<"enter the n value\n";
cin>>n;
switch(ch)
{ 
case 1:
cout<<"enter the integers\n";
for(int i=0;i<n;i++)
cin>>a[i];
maxmin(a,n);
break;
case 2:
cout<<"enter the characters \n";
for( int i=0;i<n;i++)
cin>>c[i];
maxmin(c,n);

break;
case 3:
cout<<"enter the double numbers\n";
for(int i=0;i<n;i++)
cin>>d[i];
maxmin(d,n);
break;
default:cout<<"invlid choice entered....";
}
return 0;
}
