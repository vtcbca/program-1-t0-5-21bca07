/*write a program to enter any number & print sum of digit.
date:22dec,2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,r;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	for(s=0;n>0;)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("\nsum is %d",s);
	getch();
}