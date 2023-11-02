#include<stdio.h>
#include<stdlib.h>
void dfs(int,int);
void push(int);
int pop();
int top=-1,visit[7],a[7][7],stack[7];

void dfs(int s,int n){
    int i,k;
    push(s);
    visit[s]=1;
    k=pop();

    if(k!=0){
        printf("%d",k);
    }
    while(k!=0){
        for(i=1;i<=n;i++)
            if((a[k][i]!=0) && (visit[i]==0)){
                push(i);
                visit[i]=1;
            }
        k=pop();
        
        if(k!=0){
            printf("%d",k);
        }
    }
    for(i=1;i<=7;i++){
        if(visit[i]==0){
            dfs(i,n);
        }
    }
}

void push(int data){
    if(top==7){
        printf("full");
    }
    else{
        stack[++top]=data;
    }
}

int pop(){
    int k;
    if(top==-1){
        return 0;
    }
    else{
        k=stack[top--];
        return(k);
    }
}

void main(){
    int i,j,n,s;
    printf("enter vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter 1 if %d node has with %d else 0:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("adjaceny matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        visit[i]=0;
    }
    printf("enter source vertex:");
    scanf("%d",&s);
    dfs(s,n);
}