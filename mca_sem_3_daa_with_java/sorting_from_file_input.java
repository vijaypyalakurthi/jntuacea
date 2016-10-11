//A programe to read input from a file and sort the numbers in it.
// Students:  U. Anil kumar & Y. Mallikarjuna Reddy

import java.io.*;
import java.util.*;
class Sorting{
      public static void main(String[] args)throws IOException
	{
	  FileInputStream fs=new FileInputStream("data.txt");
	  Scanner s=new Scanner(fs);
	  int size=fs.available();
	  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	  System.out.println("enter n value:");
	  int n=Integer.parseInt(br.readLine());
	  int num=0,m=0;
	  long start =System.currentTimeMillis();
	  int a[]=new int [n];
	  while(s.hasNext() && num<n){
	  num++;
          String data=s.nextLine();
	  int i=Integer.parseInt(data);
 
	  if(m < n)
	  {
	   a[m]=i;
	   m++;
	  }
	}
     System.out.println("before sorting :");
     for(m=0;m<n;m++)
     System.out.println(a[m]);
     for(int x=0;x<n;x++)
     {
       for(int y=0;y<=x;y++)
       {
	if(a[x]<=a[y])
        {
	 int t=a[x];
	 a[x]=a[y];
	 a[y]=t;
	}
      }
    }
System.out.println("after sorting:");
for(int k=0;k<n;k++)
System.out.println(a[k]);
long end =System.currentTimeMillis();
long diff=end-start;
System.out.println("Enter key value:");
int key=Integer.parseInt(br.readLine());

int flag=0;
for(int j=0;j<n;j++)
{
if(a[j]==key)
{
System.out.println("element found|location at :"+(j+1));
flag++;
}
}
if(flag==0)
System.out.println("element not found:");


System.out.println("time complexity:"+diff);
}

}
