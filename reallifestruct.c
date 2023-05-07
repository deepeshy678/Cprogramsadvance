#include<stdio.h>
struct car{
    char name;
    char model;
    int year;
    float mileage;
}record;
int main(void)
{
    struct car record;
    record.name='k';
    record.model='P';
    record.year=2007;
    record.mileage=5.25;
    printf("\nCar name is :%c",record.name);
    printf("\nCar model is :%c",record.model);
    printf("\nCar launched year :%d",record.year);
    printf("\nCar mileage is :%0.2f",record.mileage);
}