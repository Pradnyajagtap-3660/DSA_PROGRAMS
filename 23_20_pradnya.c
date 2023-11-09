#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 5
int a[size];
int top=-1;
void push(int x){
    if(top>size){
        printf("full");
    }
    else{
        a[++top]=x;
    }
}
int pop(){
    if(top==-1){
        printf("empty");
    }
    else{
        
        return a[top--];
    }
}

int evaluate(char *postfix){
    for(int i=0;postfix[i]!='\0';i++){
        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            int op1=pop();
            int op2 = pop();

            switch(postfix[i]){
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    push(op1/op2);
                    break;
            }
        }
    }
    return pop();
}
void main(){
    char postfix[size];
    printf("enter postfix:");
    gets(postfix);
    int result = evaluate(postfix);
    printf("result is %d",result);
}