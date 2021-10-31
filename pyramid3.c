/*Program to print Inverted half pyramid using *

* * * * *
* * * *
* * * 
* *
*
AUTHOR:JINJU RAJU
DATE:27/02/19*/
#include<stdio.h>
void main()
{ 
int i,j,limit;
printf("enter limit");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
	{
	for(j=limit;j>=i;j--)
		{
		printf("*\t",j);
		}
	printf("\n");
	}
}
