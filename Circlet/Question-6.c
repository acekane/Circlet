#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a Row:- ");
	scanf("%d",&n);
	int i;
	int j;
	int space;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(space=n;space>i;space--)
		{
			printf("  ");
		}
			for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	
	
	
	
	getch();
}
