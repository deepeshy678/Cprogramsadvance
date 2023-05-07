#include<stdio.h>
int main()
{
    struct student
    {
        char name[50];
        char gender;
        int age;
        long long int number;
    };
    struct student s1={"Dipesh Kumar Yadav",'M',18,9816217614};
    printf("Name\t\t\tGender\tage\t\tMobile No.\t");
    printf("\n.....................................................\n");
    printf("%s\t%c\t%d\t%lld",s1.name,s1.gender,s1.age,s1.number);

}