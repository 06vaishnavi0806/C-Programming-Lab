#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *left;
   struct Node *right;
};
struct Node *createNode(int val)
{
   struct Node *newNode;
   newNode = (struct Node *)malloc(sizeof(struct Node));
   if (newNode)
   {
      newNode->data = val;
      newNode->left = NULL;
      newNode->right = NULL;
   }
   return newNode;
}
struct Queue
{
   struct Node *arr[100];
   int front;
   int rear;
};
void initqueue(struct Queue *q)
{
   q->rear = q->front = -1;
}
void enqueue(struct Queue *q, struct Node*node)
{
   if (q->rear == 99)
   {
      return;
   }
   if (q->front == -1)
   {
      q->front = 0;
      q->arr[++q->rear] = node;
   }
}
struct Node *dequeue(struct Queue *q)
{
   if (q->front == -1)
   {
      return NULL;
   }
   struct Node *temp = q->arr[q->front];
   if (q->front == q->rear)
   {
      q->front = q->rear = -1;
   }
   else
      q->front++;
   return temp;
}
struct Node *insert(struct Node *root, int val)
{
   struct Node *newNode = createNode(val);
   if (root == NULL)
   {
      return newNode;
   }
   struct Queue q;
   initqueue(&q);
   enqueue(&q, root);
   while ((&q)->front != -1)
   {
      struct Node *temp = dequeue(&q);
      if (temp->left == NULL)
      {
         temp->left = newNode;
         return root;
      }
      else
      {
         enqueue(&q, temp->left);
      }
      if (temp->right == NULL)
      {
         temp->right = newNode;
         return root;
      }
      else
      {
         enqueue(&q, temp->right);
      }
   }
   return root;
}
//void preOrder(struct Node*root)
// {
//    if (root!=NULL)
//    {
//         printf("%d ,",root->data);
//         preOrder(root->left);
//         preOrder(root->right);     
//    }
   
// }
void bfsTraversal(struct Node*root)
{
   if (root == NULL)
   return;

   struct Queue q;
   initqueue(&q);

   while (q.front != -1)
   {
     struct Node *temp = dequeue(&q);
     printf("%d ",temp->data);

     if (temp->left == NULL)
     enqueue(&q, temp->left);
      if (temp->right == NULL)
      enqueue(&q, temp->right);

   }
   
}


int main(){
   struct Node*root = NULL;
   root=insert(root,10);
   root=insert(root,30);
   root=insert(root,40);
   root=insert(root,50);
   root=insert(root,60);
   root=insert(root,70);
   preOrder(root);
}