#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long i=1,result,n1=0,n2=0,n=100;
while(i!=n+1)
{
	n1+=((i)*(i));
	i++;
}
i=1;
while(i!=n+1)
{
	n2+=i;
	i++;
}
n2=(n2)*(n2);
result=n2-n1;
cout<<"The result is "<<result<<endl;
return 0;	
}
