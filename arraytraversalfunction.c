#include<stdio.h>
void trave(int arr[5]);
int main()
{
    int arr[5];
     for(int i=0;i<5;i++)
    {
        printf("\nEnter [%d] element:",i);
        scanf("%d",&arr[i]);
    }
trave(arr[5]);
}
void trave(int arr[5])
{
    printf("\nThe array elements are:\n");
    for(int i=0;i<5;i++)
    {
      printf("%d\t",arr[i]);
    }
}
