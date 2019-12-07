#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long s,n,r,rev,i=100,j=100,big=0;
for(i=100;i<=999;i++)
{
	for(j=100;j<=999;j++)
	{	
		n=(i*j);
		s=n;
		rev=0;
		while(n!=0)
		{
			r=n%10;
			rev=rev*10+r;
			n=n/10;
		}
		if(s==rev)
		{
			if(s>big)
			{
				big=s;
			}
		}
	}	
}
cout<<"Largest possible palindrome by the product of possible 3 digit numbers is "<<big<<endl;
return 0;	
}
