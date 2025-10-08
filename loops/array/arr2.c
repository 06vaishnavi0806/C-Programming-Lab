#include <stdio.h>
int main()
{

    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[9];
    int k;
    for (int i = 0; i < 3; i++)
    {
        // int sum = 0;

        for (int j = 0; j < 3; j++)
        {

            arr2[k] = arr1[i][j];
            k++;

            // printf("%d ", arr[i][j]);
            // sum=sum+arr[j][i];
            // sum=sum+arr[i][j];
        }
        printf("%d ", arr2[k]);
        printf("\n");
    }
}