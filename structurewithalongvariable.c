#include<stdio.h>
#include<string.h>
struct person//new structure variable
{
    int salary;
    char name[20];
    int citi;
}record;//variable in along with structure
int main()
{
    struct person record;//calling the structure data types and the variable
    record.salary=50000;// '.' is used to point the structure variable with the inside salary variable
    strcpy(record.name,"Dipesh Yadav");//strcpy is from string.h
    record.citi=1769;
    printf("\nYour name is :%s",record.name);
    printf("\nYour citizenshhip number is :%d",record.citi);
    printf("\nYour monthly salary is :%d",record.salary);


}