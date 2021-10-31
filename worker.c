/*program to find efficiency of workers
author:jinju raju
date:20/02/19*/
#include<stdio.h> 
void main()
{
float time;
printf("ENTER TIME OF THE WORKER");
scanf("%f",&time);
if(time>=2 && time<3)
{
printf("THE WORKER IS SAID TO BE HIGHLY EFFICIENT");
}
if(time>=3 && time<4)
{
printf("THE WORKER IS ORDERED TO IMPROVE SPEED");
}
if(time>=4 && time<=5)
{
printf("THE WORKER IS GIVEN TRAINING TO IMPROVE HIS SPEED");
}
if(time>5)
{
printf("THE WORKER IS TERMINATED");
}
}
