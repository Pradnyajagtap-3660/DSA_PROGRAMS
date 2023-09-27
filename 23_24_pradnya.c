#include<stdio.h>
int quick(int*,int,int);
void sort(int *array,int s,int e)
{
    if(s<e)
    {
        int indexp=quick(array,s,e);
        sort(array,s,indexp-1);
        sort(array,indexp+1,e);
    }
}
int quick(int *array,int s,int e)
{
    int pivot=array[s];
    int i=s+1;
    int j,temp;
    j=e;
    do{
        while(array[i]<=pivot)
        {
            i++;
        }
        while(array[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }while(i<j);
    temp=array[s];
    array[s]=array[j];
    array[j]=temp;
    return j;

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
    int s=0;
    int e=size-1;
    sort(array,s,e);
    printf("sorted array:\n");
    for(i=0;i<size;i++)
    {
        printf("\n%d",array[i]);
    }
}