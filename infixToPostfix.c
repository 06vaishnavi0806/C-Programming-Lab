#include<stdio.h>
#include<ctype.h>

int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch=='*'||ch=='/'||ch=='%')
    {
      return 2;
    }
      else if (ch=='+'||ch=='-')
    {
      return 1;
      
    }
    return -1;
}

 char * postfix(char exp[], char post[])
{
  int i=0, j=0, top=-1;
  char stack[100];
  while (exp[i]!=0)
  { 
   if (isalnum(exp[i]))
   {
    post[j]=exp[i];
    j++;
   }
   else if (exp[i]=='(')
   {
    stack[++top]='(';
   }
   else if (exp[i]==')')
   {
    while ((stack[top]!='(')&& (top!=-1))
    {
      post[j++]=stack[top--];
    }
    top--;
   }
   else
   {

    while (top!=-1 && (priority(stack[top])>priority(exp[i]))||(priority(stack[top])==priority(exp[i]))&&exp[i]!='^' )
    {
     post[j++]=stack[top--];
    }
    stack[++top] = exp[i];
   }
   i++;
  }
  while (top!=-1)
  {
    post[j++]=stack[top--];
  }
  post[j]=0;
  return post;

}


int main()
{
    char exp[100]="a+b*c-d^e^f";
    char post[100];
    postfix(exp,post);
    printf(post);
}