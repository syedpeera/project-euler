#include<stdio.h>
#include<conio.h>
int main()
{
long long n,k,s=1,p;
printf("Enter the number for which u want to find the largest prime factor\n");
scanf("%ld",&n);
k=n;
printf("Prime factors are \n");
printf("%ld\n%ld\n",1,2);
while(s!=n)
{
p=n%s;	
	if(p!=0)
	{
		printf("%ld\n",s);
	}
s++;

}


	
getch();	
return 0;
}
