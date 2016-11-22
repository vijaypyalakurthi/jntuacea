#include<iostream>
int swap(int &ix,int &iy);
char swap(char &cx,char&cy);
float swap(float&fx,float &fy);
int main()
{ 
int ix,iy;
float fx,fy;
char cx,cy;
std::cout<<"enter two integers:\n";
std::cin>>ix>>iy;
std::cout<<"enter two floating point numbers:\n";
std::cin>>fx>>fy;
std::cout<<"enter two characters:\n";
std::cin>>cx>>cy;
std::cout<<"\nintegers are:";
std::cout<<ix<<iy;
swap(ix,iy);
std::cout<<"\nafter swapping intger are:";
std::cout<<"\nix= "<<ix<<"iy= "<<iy;
std::cout<<"\n floating points are: ";
std::cout<<fx<<fy;
swap(fx,fy);
std::cout<<"after swapping the float values are:";
std::cout<<fx<<fy;
std::cout<<"the character values are: ";
std::cout<<cx<<cy;
swap(cx,cy);
std::cout<<"after swapping the character values are :";
std::cout<<cx<<cy;
}
int swap(int &a,int &b)
{int temp;
temp=a;
a=b;
b=temp;
return 0;
}
float swap(float &a,float &b)
{
float term;
term=a;
a=b;
b=term;
return 0;
}
char swap(char &a,char&b)
{
char temp=a;
a=b;
b=temp;
return 0;
}
