#include<stdio.h>
#include<conio.h>
int main()
{
long long n,next,first=1,second=2,k=0,sum=2;
printf("The fibonacci series is \n%ld\n%ld\n",1,2);
while(1)
{
k++;	
next=first+second;
printf("%ld\n",next);
first=second;
second=next;
	if(next%2==0 && next<=(4000000))
	{
		sum=sum+next;
	}
	if(next>=4000000)
	{
		break;
	}
}	
printf("The sum of those even fibonacci numbers is %ld\n",sum);
getch();	
return 0;	
}
