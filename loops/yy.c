#include<stdio.h> 
int main(){
    int i,j,p,k;
    for(i=0; i<5;i++){

       printf("\n");

        for(j=5; j<=i; j--){
            printf(" ");
            scanf("%d",i);
        }

        for(p=4; p<=i; p--){
            printf("*");
            scanf("%d",i);
        }
        for(k=3;k<=1;k--){
            printf("*");
            scanf("%d",i);
            

        }




    }
    return 0;
}