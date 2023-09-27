#include<stdio.h>
void insertion(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int sort= array[i];
        int j=i-1;

        while(j>=0 && array[j]>sort)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=sort;
    }
}
void main()
{ 
    int size,i;
    printf("enter array size:\n");
    scanf("%d",&size);

    int array[size];
    printf("enter elements in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    insertion(array,size);
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("\n%d",array[i]);
    }
}