#include<iostream>
using namespace std;
class template_function
{
public:
int n,a[],biggest=0,smallest;
void getdata();
void logic();
};
void template_function::getdata()
{
	cout<<"enter a vlaue : ";
	cin>>n;
	cout<<"enter "<<n<<" vlaues : \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"enterd list is : \t";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	smallest = a[0];
}
void template_function::logic()
{
	for(int i=0;i<n;i++)
	{
		if(biggest<=a[i])
		{
			biggest=a[i];
		}
		if(smallest>=a[i])
		{
			smallest=a[i];
		}
	}
	cout<<"the biggest value in the list is :"<<biggest<<"\n";
	cout<<"the smallest value in the list is :"<<smallest<<"\n";
}
int main()
{
	template_function tf;
	tf.getdata();
	tf.logic();
	return 0;
	
}
