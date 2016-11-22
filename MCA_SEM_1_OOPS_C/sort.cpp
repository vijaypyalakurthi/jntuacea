#include<iostream>
#include<cstring>
int main()
{
char st[10][10],temp[10];
int i,j,n;
std::cout<<"enter the number of names:";
std::cin>>n;
std::cout<<"enter the different names:";
for(int i=0;i<n;i++)
{
std::cin>>st[i];
}
for(i=0;i<n;i++)
{
for(j=i;j<n-1;j++)
{
if(strcmp(st[i],st[j+1])>0)
{
strcpy(temp,st[i]);
strcpy(st[i],st[j+1]);
strcpy(st[j+1] ,temp);
}
}
}
std::cout<<"given names after ascending order:";
for(int i=0;i<n;i++)
std::cout<<st[i]<<"\t";
return 0;
}
