#include<stdio.h>
int main(){

    int n;
    printf("enter a number ");
    scanf("%d",&n);


    int a=23;
    for(int i=1; i<=n; i++){
        printf("%d\n",a);
        a=a+4;
    }


    return 0;
    
}