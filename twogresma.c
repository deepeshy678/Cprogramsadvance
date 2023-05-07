#include<stdio.h>
void arr(int*, int*);
int main()
{
    int p,q,j;
    printf("\nEnter the 1st num:");
    scanf("%d",&p);
    printf("\nEnter the 2nd number:");
    scanf("%d",&q);
    printf("\nBefore");
    printf("\nThe value of p and q are:%d and %d",p,q);
    printf("\nAfter ");
    arr(&p,&q);
    printf("\nThe value of p and q are:%d and %d",p,q);

    
}
void arr(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n Value of p and q in function are:%d and %d",*a,*b);

}
