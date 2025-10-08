#include <stdio.h>
int main()
{

    int arr[5] = {1, 3, 4, 65, 3};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 1; i < n - 1; i++)
    {
        // int temp=arr[i];

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                printf("%d", j + 1);
            }
        }
        //       printf("%d",j+1);
        
    }
    return 0;
}