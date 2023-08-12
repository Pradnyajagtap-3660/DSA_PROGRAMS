/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
int fibonnaci(int i);
void main()
{
int n,i;
printf("enter no.");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",fibonnaci(i));
}
}
int fibonnaci(int i)
{
   if(i==0)
   {
   return 0;
   }
   if(i==1)
   {
   return 1;
   }
   else
   {
   return(fibonnaci(i-1)+fibonnaci(i-2));
   }
}
   
