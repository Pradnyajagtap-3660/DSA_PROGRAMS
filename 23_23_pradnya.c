#include<stdio.h>
void merge(int* ,int ,int ,int );
void sort(int *array,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        sort(array,low,mid);
        sort(array,mid+1,high);
        merge(array,low,mid,high);
    }
}
void merge(int* array,int low,int mid,int high)
{
    int i,j,k,copy[low+high];
    i=low;
    j=mid+1;
    k=low;

    while(i<=mid && j<=high)
    {
        if(array[i]<array[j])
        {
            copy[k]=array[i];
            i++;
            k++;
        }
        else
        {
            copy[k]=array[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        copy[k]=array[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        copy[k]=array[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++)
    {
        array[i]=copy[i];
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

    sort(array,0,size-1);
   
    printf("after sorting:\n");
     for(i=0;i<size;i++)
    {
        printf("\n%d",array[i]);
    }
}