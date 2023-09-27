#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *array,int i,int size)
{
    int temp,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
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

    bubblesort(array,i,size);
   
    printf("after sorting:\n");
     for(i=0;i<size;i++)
    {
        printf("\n%d",array[i]);
    }
}