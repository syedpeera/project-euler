#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long n,i,j,k,flag,count=0;
j=2;
while(count!=10001)	
{	
	i=2;
	flag=0;
	while(i!=j)
	{
		k=j%i;
		if(k==0)
		{
			flag++;
		}
		i++;
	}
	if(flag==0)
	{
		count++;
		cout<<count<<"."<<j<<endl;
	}	
	j++;
}//104743
cout<<"The result is "<<--j;
return 0;	
}
