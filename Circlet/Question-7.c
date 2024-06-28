#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a Row:- ");
	scanf("%d",&n);
	int i;
	int j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
				printf("* ");
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	getch();
}
