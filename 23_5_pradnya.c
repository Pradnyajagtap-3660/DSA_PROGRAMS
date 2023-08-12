/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
void main()
{
   int a[23],i,large;
   large=0;
   printf("enter elements in array:");
   for(i=1;i<=3;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=1;i<=3;i++)
   {
      if(large<a[i])
      {
         large=a[i];
      }   
   }
   printf("largest element in array:%d",large);
}   	
