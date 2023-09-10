/*Name:Pradnya Jagtap
Roll no. 23
Batch:B
circular queue*/
#include<stdio.h>
#include <stdlib.h>
#define size 3
int a[size];
int f=-1;
int r=-1;

void Enqueue(int x)
{
   if(r==size-1 && f==0 || f==r+1)
   {
     printf("array is full");
   }
   else
   {
     if(f==-1 && r==-1)
     {
       f=r=0;
       
       a[r]=x;
      
     }
     else
     {
       r=(r+1)%size;
       a[r]=x;
      
     }
   }
}

void Dequeue()
{
	if(r==-1 && f==-1)
	{
		printf("array is empty");
	}
	else
	{
		if(r==f)
		{
			f=r=-1;
		}
		else
		{
			f=(f+1)%size;
		}	
	}
}

void display()
{
	int i;
	if(r==-1 && f==-1)	
	{
		printf("queue is empty");
	}
	else
	{
		if(f<r)
		{
			for(i=f;i<=r;i++)
			{
				printf("\n%d",a[i]);
			}
		}
		else
		{
			for(i=f;i<=2;i++)
			{
				printf("\n%d",a[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("\n%d",a[i]);
			}
		}
	}
}
	
void main()
{	int x;
	printf("   menu    ");
	printf("\n1.insert 2.delete 3.display 4.exit");
	while(1)
	{
	 int choice;
	 printf("\nenter choice:");
	 scanf("%d",&choice);
	  switch(choice)
	  {
	  	case 1:
	  		printf("enter numder in array:");
			scanf("%d",&x);
	  		Enqueue(x);
	  		break;
	  	case 2:
	  		Dequeue();
	  		break;
	  	case 3: 
	  		display();
	  		break;
	  	case 4:
	  		exit(1);
	  	default:
	  		printf("wrong choice");
	  		break;	  
	  }
}	  
}
