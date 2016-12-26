#include<iostream>
using namespace std;
int main()
{
	int a,n;
	cout<<"enter a value";
	cin>>n;
	cout<<"enter number to construct pyramid";
	cin>>a;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
		cout<<" ";
	}
		for(int k=0;k<=i;k++)
		
		cout<<a<<" ";
		
		cout<<"\n";
	}
	return 0;
}
