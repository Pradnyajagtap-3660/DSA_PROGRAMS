#include<stdio.h>
#include<stdlib.h>
void inorder();
void preorder();
void postorder();

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    printf("\n%d",root->data);
    inorder(root->right);
}


void preorder(struct node *root){
    if(root == NULL){
        return ;
    }
    printf("\n%d",root->data);
    preorder(root->left);
    preorder(root->right);
}


void postorder(struct node *root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("\n%d",root->data);
}


struct node *createnode(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right =NULL;
   return newnode;
}

struct node *insertleft(struct node *root,int value){
    root->left = createnode(value);
    return root->left;
}

struct node *insertright(struct node *root,int value){
    root->right = createnode(value);
    return root->right;
}

int main(){
    struct node *root =NULL;
    int value;
    char choice1,choice2;

    do{
        printf("enter value to be inserted:");
        scanf("%d",&value);

        if(root == NULL){
            root = createnode(value);
        }
        else{
            printf("insert value to left/right:");
            scanf("\n%c",&choice1);

            if(choice1 == 'l'){
                insertleft(root,value);
            }
            else{
                insertright(root,value);
            }
        }
        printf("do you want to continue:");
        scanf("\n%c",&choice2);
    }while(choice2 == 'y');

    printf("inorder:");
    inorder(root);

    printf("\npreorder:");
    preorder(root);

    printf("\npostorder:");
    postorder(root);
}