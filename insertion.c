#include <stdio.h>
int main()
{
    int a[100], i, j, n, temp;
    printf("Enter the number of elements here _ ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number here _ ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j -- ;
        }
        a[j + 1] = temp;
    }
    printf("[\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("]");
    return 0;
}
