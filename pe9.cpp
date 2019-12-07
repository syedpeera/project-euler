#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long long a=1,b=2,c=3,result;
for(a=1;a<1000;a++)
{
	for(b=1;b<1000;b++)
	{
		for(c=1;c<1000;c++)
		{
			if(a+b+c==1000)
			{
				if((a*a)+(b*b)==(c*c))
				{
					result=a*b*c;
					cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl<<"The result is "<<result<<endl<<endl;
				}
			}	
		}
	}	
}	
return 0;	
}