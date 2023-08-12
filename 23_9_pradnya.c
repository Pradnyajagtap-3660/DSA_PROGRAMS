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
    int count=0;
    
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
    }
    printf("count of duplicate elements:%d",count);
}