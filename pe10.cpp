#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long i,j,flag,k,sum=0,n=5;
cout<<"The sum of prime numbers below two million is : ";
cin>>n;
for(i=2;i<n;i++)
{
	j=2;
	flag=0;
	while(j!=i)
	{
		k=i%j;
		if(k==0)
		{
			flag++;
		}
		j++;
	}
	if(flag==0)
	{
		sum=sum+i;
	}
}	
cout<<"The sum of the prime numbers (upto the limit) is "<<sum;
return 0;	
}
