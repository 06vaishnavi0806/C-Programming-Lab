#include <stdio.h>
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d", number);


    number==0 ? printf("zero"): number < 0 ? printf("negetive") : printf("positive") ;
}