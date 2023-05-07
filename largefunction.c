#include<stdio.h>
int even();
int main()
{
   even();

}
int  even()
{
  int a;
  printf("\nEnter a value to check :");
  scanf("%d",&a);
  if(a%2==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
return a;

}
