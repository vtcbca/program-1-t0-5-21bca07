/*write a program to enter any numberand check it is an armstrong num
or not.
date:27dec,2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c,no,sum=0;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&no);
	for(no=c;no!=0;)
	{
		b=c%10;
		b=a*a*a;
		no=no/10;
		sum=sum+b;
	}
	if(c==sum)
		printf("%d is an armstrong number",no);
	else
		printf("%d is not an armstrong number",no);
	getch();
}