#include <stdio.h>
int main()
{
    int num[100], i, n, p, x;
    printf("Enter the size of the array=");
    scanf("%d", &n);
    printf("Enter %d elements in the array:", n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter element in %d index:", i);
        scanf("%d", &num[i]);
    }
    printf("\n Enter the number to insert in the array=");
    scanf("%d", &x);

    printf("\n Enter the position to insert the %d element:", x);
    scanf("%d", &p);
    for (i = n; i>=p; i--)
        num[i] = num[i - 1];
    num[p - 1] = x;

    for (i = 0; i<=n; i++)
    {
        printf("%d \t", num[i]);
    }
}