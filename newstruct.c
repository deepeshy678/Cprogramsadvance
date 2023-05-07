#include<stdio.h>
#include<string.h>
struct car
{
   int total;
   char name[20];
   float mileage;

};
int main()
{
    struct car record;
    record.total=5;
    strcpy(record.name,"KIA\n");
    record.mileage=5.2;
    printf("\nThe name of the car is :%s",record.name);
    printf("\nThe total capacity of people is :%d",record.total);
    printf("\nThe mileage of this car is ;%0.2f",record.mileage);

}