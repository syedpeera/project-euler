#include<stdio.h>
int main()
{
int n,i=2,j=0,k;	
printf("Enter the number ");
scanf("%d",&n);	
while(i!=n)
{
	k=n%i;
	if(k==0)
	{
		j++;
	}
	i++;
}
if(j==0)
{
	printf("Prime Number ");
}
else
{
	printf("Not a Prime Number ");
}
return 0;
}
