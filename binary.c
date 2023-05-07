#include<stdio.h>
int main()

{
  int num,i,rem;
  printf("Enter the number to check :");
  scanf("%d",&num);
  while(num>0)
  {
    rem=num%10;
    if(rem!=0 && rem!=1)
    {
      printf("\n %d is not a binary number",num);
      break;
    }
    num=num/10;
    if(rem==0)
    {
      printf("\n %d is a binary number",num);
      break;
    }
  }
}