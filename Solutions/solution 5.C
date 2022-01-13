/* wap to enter any number and check it primr or not.
date:22 dec,2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(a=n;n>0;n=n-1)
	{
		if(n%a==0)
		printf("\n%dnum is prime",n);
		else
		printf("\n%d num is not prime",n);
		n=n-1;
		}
		getch();
}

