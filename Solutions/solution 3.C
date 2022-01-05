/*write a program to enter any number & check num is pellindrome number or not.
date:27dec,2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("Enter a number to reverse:");
	scanf("%d",&a);
	for(c=a;a!=0;)
	{
		b=b*10;
		b=b+a%10;
		a=a/10;
	}
	if(c==b)
		printf("%d is a pellindrome num",c);
	else
		printf("%d is not a pellindrome num",c);
	getch();
}
