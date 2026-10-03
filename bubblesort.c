#include <stdio.h>

int main()
{
    int a[50], i, j, temp,n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter %d elements;\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}