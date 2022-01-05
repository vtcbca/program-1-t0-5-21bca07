/*write a program to take input any number from user and print even number series till end of the number.
date:20dec,2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,e;
	clrscr();
	printf("Enter the start and end number:");
	scanf("%d%d",&s,&e);
	for(;s<=e;s=s+1)
	{
		if(s%2==0)
		printf("\n%d",s);
	}
	getch();
}
