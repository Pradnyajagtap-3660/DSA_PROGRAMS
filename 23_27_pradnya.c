#include<stdio.h>
#include<stdlib.h>
int q[5],rear=-1,front=-1,visit[5],a[5][5];
void add(int);
int delete();
void display();

void bfs(int n,int s){
     int i,p;
    add(s);
    visit[s]=1;
    p=delete();

    if(p!=0){
        printf("%d",p);
    }
    while(p!=0){
        for(i=1;i<=n;i++)
            if((a[p][i]!=0) && (visit[i]==0)){
                add(i);
                visit[i]=1;
            }
        p=delete();
        
        if(p!=0){
            printf("%d",p);
        }
    }
    for(i=1;i<=n;i++){
        if(visit[i]==0){
            bfs(i,n);
        }
    }
}

void add(int data){
    if(rear>=5){
        printf("full");
    }
    else{
        if(rear==-1){
            q[++rear]=data;
            front++;
        }
        else{
            q[++rear]=data;
        }
    }
}

int delete(){
    int k;
    if((front>rear) || (front==-1)){
        return 0;
    }
    else{
        k=q[front++];
        return k;
    }
}

int main(){
    int n,i,j,s;
    printf("enter vertices:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("enter 1 if %d has a node with %d else 0:",i,j);
            scanf("%d",&a[i][j]);
        }
    }   
     printf("adjacency matrix:");
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    visit[i]=0;
    printf("enter source vertex:");
    scanf("%d",&s);
    bfs(n,s);
}