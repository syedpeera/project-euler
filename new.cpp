#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long n,s,r,a[4],i=0,temp,j,k;	
	cout<<"Enter a four digit number "<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		a[i++]=r;
		n=n/10;
	}	
	for(k=0;k<3;k++)
	{
		for(i=0;i<4;i++)
		{
			if(a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}		
	cout<<"The largest number possible is "<<ends;
	for(i=0;i<4;i++)
	{
		cout<<a[i];
	}
return 0;	
}
