#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long temp,n,i,k,j,flag;
cout<<"Enter the limit "<<endl;
cin>>n;
temp=n;
	for(j=2;j<=n;j++)
	{	
		i=2;
		flag=0;
		while(i!=j)
		{
			k=j%i;
			if(k==0)
			{	
				flag++;
				break;
			}	
			i++;
		}
		if(flag==0)
		{
			if(temp%j==0)
			{
				cout<<j<<ends;
			}
		}
	}	
return 0;
}
