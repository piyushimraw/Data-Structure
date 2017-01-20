#include <stdio.h>
#include <conio.h>
using namespace std;
 typedef struct Node {
     int data;
     struct Node *left,*right;
 };

 typedef struct head{
 Node*root;
};


//for Insertion
void insertion(head*t,int ele){
    Node*p,*q;
    p=(Node*)malloc(sizeof(Node));
    p->data=ele;
    p->left=p->right=NULL;
    if(t->root==NULL){
        t->root=p;
        return;
    }
    q=t->root;
    while(q!=NULL){
        if(ele<=q->data){
            q->left=p;
            break;
        }
        else{
            q=q->left;
        }
        else if(q->right==NULL){
            q->right=p;
            break;
        }
        else
            q=q->right;

        }

    }

//Imorder traversal using recursion
void inorder(Node* x){
    if(x!=NULL){
        inorder(x->left);
        printf("%d",x->data);
        inorder(x->right);
    }
}
void preorder(Node* x){
    if(x!=NULL){
        printf("%d"x->data);
        preorder(x->left);
        preorder(x->right);
    }
}

void postorder(Node *x){
    if (x!=NULL){
        postorder(x->left);
        postorder(x->right);
        printf("%d",x->data);
    }
}

void main(){
    int ch,ele;
    head x,x1;
    x.root=NULL;
    x1.root=NULL;
    while(1)
    {
        printf("Enter Choice you want to perform\n1.Insert\n2.Preorder\n3.Inorder\n4.Postorder\n5.Exit");
        scanf("%d",&ch);
        if (ch==5){
            printf("Thanx for using\n");
            getch();
            break;
        }
        switch(ch){
        case 1:
            printf("\nEnter the element>> \t");
            scanf("%d",&ele);
            insertion(&x,ele);
            inorder(x.root);
            break;
        }
        default:
            printf("enter correct choice");
    }
}
