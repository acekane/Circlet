#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int sp;
	for(i=5;i>=1;i--)
	{
		for(sp=1;sp<i;sp++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	
	getch();
}
