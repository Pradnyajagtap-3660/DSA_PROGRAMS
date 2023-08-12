/*Name:Pradnya Jagtap
Roll no.:23
Batch:B*/
#include<stdio.h>
void pascal();
void main()
{
    int i,j,n,max,space;
    printf("enter the rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                max=1;
            }
            else
            {
                max=max*(i-j+1)/j;
            }
            printf("%4d",max);
        }
        printf("\n");
    }
}