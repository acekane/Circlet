#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int space;
	for(i=1;i<=5;i++)
	{
		for(space=1;space<i;space++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	    
	}
	
	
	
	
	getch();
}
