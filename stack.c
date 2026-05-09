#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int TOP = -1;
int a[MAX];
void PUSH(int);
void POP();

int main()
{
  int ch, val;
  do
  {
    printf("\nPress 1. PUSH\n");
    printf("Press 2. POP\n");
    printf("Press 3. Exit\n");

    printf("Enter your choice: ");
    scanf(" %d", &ch);

    switch (ch)
    {
    case 1:
      printf("\nEnter any data: ");
      scanf("%d", &val);
      PUSH(val);
      break;

    case 2:
      POP();
      break;

    case 3:
      printf("\nProgram is exiting...");
      exit(0);
    default:
      printf("\nIncorrect input");
    }
  } while (1);
}
void PUSH(int val)
{
  if (TOP == MAX - 1)
  {
    printf("Stack is on overflow...");
    return;
  }
  TOP++;
  a[TOP] = val;
  printf("\nData is inserted");
  return;
}

void POP()
{
  int temp;
  if (TOP == -1)
  {
    printf("stack is on underflow...");
    return;
  }
  temp = a[TOP];
  printf("\n%d Value is deleting ", temp);
  TOP--;
  return;
}