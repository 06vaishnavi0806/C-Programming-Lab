#include<stdio.h>
int main()
{
    int a[] = {4, 5, 2, 25};
        int n = 4;  
    int s[10];
    int TOP = -1;
    for (int i = 0; i < n; i++)
    {
        while (TOP != -1 && a[i] > s[TOP])
        {
           printf("%d ",a[i]);
           TOP--;
        }
        s[++TOP] = a[i];
    }
       while (TOP == -1)
       {
       printf(" -1");
       TOP--;
       }
    return 0;
}
