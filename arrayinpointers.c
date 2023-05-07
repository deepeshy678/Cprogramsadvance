#include<stdio.h>
int main()
{
  int x[5]={15,16,17,18,19};
  int *ptr[5],i;
  for(i=0;i<5;i++)
  {
    ptr[i]=&x[i];
  }
  printf("\nDereferencing of these elements\n ");
  for(i=0;i<5;i++)
  {
    printf("%d\t",*ptr[i]);
  }

}