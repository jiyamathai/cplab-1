/*PROGRAM TO add first seven terms of the following series 
1/1! + 1/2! + 1/3! + 1/4! + .. + 1/7!
AUTHOR:JIJNU RAJU
DATE:6/03/19*/
#include<stdio.h>
void main()
{
float i=1,sum=0,fact=1;
while(i<=7)
	{
	fact=fact*i;
	sum=sum+(1/fact);
	i++;
	}
printf("the sum of the series is %f",sum);
}
