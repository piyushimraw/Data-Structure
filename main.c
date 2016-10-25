#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 typedef struct Node {
     int data;
     struct Node *left,*right;
 };

 typedef struct head{
    struct Node*root;
};


//for Insertion
void insertion(struct head*t,int ele){
    struct Node*p,*q;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=ele;
    p->left=p->right=NULL;
    if(t->root==NULL){
        t->root=p;
        return;
    }
    q=t->root;
    while(q!=NULL){
        if(ele<=q->data)
        if(q->left=NULL)
            {
            q->left=p;
            break;
        }
        else
        q=q->left;

        else if(q->right==NULL){
            q->right=p;
            break;
        }
        else
            q=q->right;

        }

    }

//Imorder traversal using recursion
void inorder( struct Node* x){
    if(x!=NULL){
        inorder(x->left);
        printf("%d\n",x->data);
        inorder(x->right);
    }
}
void preorder( struct Node* x){
    if(x!=NULL){
        printf("%d",x->data);
        preorder(x->left);
        preorder(x->right);
    }
}

void postorder(struct Node *x){
    if (x!=NULL){
        postorder(x->left);
        postorder(x->right);
        printf("%d",x->data);
    }
}

void main(){
    int ch,ele;
    struct head x,x1;
    x.root=NULL;
    x1.root=NULL;
    while(1)
    {
        printf("Enter Choice you want to perform\n1.Insert\n2.Preorder\n3.Inorder\n4.Postorder\n5.Exit \n");
        scanf("%d",&ch);
        if (ch==5){
            printf("Thanx for using\n");
            getch();
            break;
        }
        switch(ch){
        case 1:
            printf("\nEnter the element");
            scanf("%d",&ele);
            insertion(&x,ele);
            inorder(x.root);
            break;
        case 2:
            printf("\n\t preorder  \n");
            preorder(x.root);
            break;
        case 3:
            printf("\n\t inorder \n");
            inorder(x.root);
            break;
        case 4:
            printf("\n\t postorder \n");
            postorder(x.root);
            break;

            default:
            printf("enter correct choice");
        }

    }
}
