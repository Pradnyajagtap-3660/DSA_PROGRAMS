/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    int array[n];
    printf("enter elements in array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    int count;
     printf("unique elements:");
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(i != j && array[i] == array[j])
            {
                count++;
            }
        } 
         
        if(count==0)
        {
             printf(" %d\n",array[i]);
                
        }
    }
}            
        
    
    
