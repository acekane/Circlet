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
	int k;
	for(i=1;i<=n;i++)
	{
		for(space=n;space>i;space--)
		{   printf(" ");
     	}
			for(j=n-i+1;j<=n;j++)
			{
				printf("%d",j);
				
			}
			for(k=i-1;k>=1;k--)
			{
				printf("%d",k);
			}
		
		printf("\n");
	}
	
	
	
	
	
	
	getch();
}
