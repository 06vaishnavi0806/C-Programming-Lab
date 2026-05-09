#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};

void preOrder(struct Node*root){
    if (root!=NULL)
    {
        printf("%d ,",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
    
}
inOrder(struct Node*root){
    if (root!=NULL)
    {
       
        inOrder(root->left);
         printf("%d .",root->data);
        inOrder(root->right);
    }
    
}
void postOrder(struct Node*root){
    if (root!=NULL)
    {
       
        postOrder(root->left);
        postOrder(root->right);
         printf("%d ,",root->data);
    }
    
}

int main(){
    struct Node *f1, *f2, *f3, *f4, *f5 ,*root;
    f1=(struct Node*)malloc(sizeof(struct Node));
     f2=(struct Node*)malloc(sizeof(struct Node));
     f3=(struct Node*)malloc(sizeof(struct Node));
      f4=(struct Node*)malloc(sizeof(struct Node));
       f5=(struct Node*)malloc(sizeof(struct Node));

       f1->data=10;
       f1->left=NULL;
       f1->right=NULL;

        f2->data=20;
       f2->left=NULL;
       f2->right=NULL;

        f3->data=5;
       f3->left=NULL;
       f3->right=NULL;

        f4->data=8;
       f4->left=NULL;
       f4->right=NULL;

        f5->data=6;
       f5->left=NULL;
       f5->right=NULL;

       f1->left=f2;
       f1->right=f3;

       f3->left=f4;
       f3->right=f5;

       root=f1;
       printf("\nPre: ");
       preOrder(root);
       printf("\nIn:");
       inOrder(root);
       printf("\nPost:");
       postOrder(root);


}
