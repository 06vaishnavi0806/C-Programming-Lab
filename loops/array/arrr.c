#include <stdio.h>
int main()
{
    int i, j;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int arr[i][j];
    for (i = 0; i < 3; i++)
    {

        for (j = 2; j <= 0; j--)
        {
            // arr[i][j]
            //  printf("%d \n", arr[i][j]);
        }
        printf("%d", arr[i][j]);
        printf("\n");
    }
}
