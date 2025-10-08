#include<stdio.h>
int main(){
    int num=65;

    for(int i=0; i<4; i++)
    { printf("\n");
        //#include<stdio.h>
        
        for(int j=0; j<=i; j++){
            printf("%c ",num++);
        }
        printf("\n");
    }
return 0;


}