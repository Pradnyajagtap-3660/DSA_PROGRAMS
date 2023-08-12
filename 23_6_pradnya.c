//ERROR
/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
void insert();
//void delete();
void traverse();
void search();
void main()
{
	int n,i;
	printf("enter the no.:");
	scanf("%d",&n);
	int array[n];
	printf("enter the values in aaray\n");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&array[i]);
	}
	
	
	while(1)
	{
		printf("---stack---\n");
		printf("\n 1.insert your choice");
		printf("\n 2.delete your choice");
		printf("\n 3.show the choice");
		printf("\n 4.Exit");
	
		int choice;
		printf("\n enter choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insert(n,array,i);
				break;
			case 2:
				//delete();
				break;
			case 3:
				traverse(n,array);
				break;
			case 4:
				break;
		}	
	}
}
void insert(int n,int array[],int i)
{int n2;
	printf("add size :");
	scanf("%d",&n2);
	int length=sizeof(array[n])/sizeof(array[0]);
	printf("length:%d",length);
	printf("enter value:");
	for(i=1;i<=n2;i++)
	{
	scanf("%d",&array[length+i]);
	}
	printf("display list:");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",array[i]);
	}	
}
/*void delete(int n,int array)
{
	
}*/
void traverse(int n,int array[] )
{
	int i;
	printf("display list:");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",array[i]);
	}	
		
}		
				
