#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long n,r,temp,rev=0;
cout<<"Enter a four digit number "<<endl;
cin>>n;
temp=n;
while(n!=0)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
}
cout<<rev;

return 0;	
}
