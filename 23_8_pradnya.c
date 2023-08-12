/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
int call();
void main()
{
    int i,n;
    printf("enter size of array:");
    scanf("\n%d",&n);
    int a[n],b[n];
    printf("enter elements of array one:");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nenter elements of array two:");

    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    int length1,length2;
    length1=sizeof(a)/sizeof(int);
    length2=sizeof(b)/sizeof(int);
    printf("The length of array 1 and 2 are %d %d",length1,length2);

    if(length1==length2)
    {
        call(a,b,n);
    }
    else
    {
        printf("0");
    }
}
int call(int a[],int b[],int n)
{
    int i,equal;
    equal=1;

    for(i=1;i<=n;i++)
    {
        if(a[i]==b[i])
        {
            equal=1;
        }
        else
        {
             equal=0;
        }
    }

    if(equal==1)
    {
        printf("\n1");
    }
    else
    {
        printf("\n0");
    }
}