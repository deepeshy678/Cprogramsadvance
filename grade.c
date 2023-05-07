#include<stdio.h>
int main()
{
    int roll,p,c,co,per,agg;
    char name[20];
    printf("Enter the name of student:");
    gets(name);

    printf("\n Enter the roll no. of student:");
    scanf("%d",&roll);

    printf("\nEnter the marks obtained in physics:");
    scanf("%d",&p);

    printf("\nEnter the marks obtained in chemistry:");
    scanf("%d",&c);

    printf("\nEnter the marks obtained in computer:");
    scanf("%d",&co);

    printf("\n Your name is ");
    puts(name);

    printf("\n Your roll no. is:%d",roll);

    printf("\nYour marks in physics:%d",p);
    printf("\nYour marks in chemistry:%d",c);
    printf("\nYour marks in compurter:%d",co);
agg=p+c+co;
    printf("\n Your aggregate mark :%d",p+c+co);
  per=agg/3;
  printf("\n Your percentage :%d",per);

if(per<=100 && per>=80)
{
    printf("\n You secured first division");
}
else if(per<80 && per>=60)
{
    printf("\n You secured second division");
}
else if(per<60 && per>=40)
{
printf("\n You have secured third division");
}
else
{
    printf("\n You are fail");
}


}