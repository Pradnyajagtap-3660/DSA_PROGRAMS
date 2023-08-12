/*Name:Pradnya Jagtap
Roll no. 23
Batch:B*/
#include<stdio.h>
struct list
{
int percent;
int rollno;
}l[34];

void main()
{
int i,j,temp;
for(i=1;i<=5;i++)
{
  printf("enter roll no.");
  scanf("%d",&l[i].rollno);
  printf("enter percent");
  scanf("%d",&l[i].percent);
}


for(i=1;i<=5;i++)
for(j=1;j<=5;j++)
{
  if(l[i].percent>l[j].percent)
  {
       temp=l[i].percent;
       l[i].percent=l[j].percent;
       l[j].percent=temp;
  }
}
       
printf("list of students:");

for(i=1;i<=5;i++)
{
  printf("%d  %d\n",l[i].rollno,l[i].percent);
}
}
      
                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
