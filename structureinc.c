#include<stdio.h>
#include<string.h>
struct student 
{
           int id;
           char name[20];
           int mark;
};
 
int main() 
{
	// Declare Strcutre Variable
	struct student record;
 
	// Assign Values for Strcutre Memebrs : id,name and mark
	record.id=1001;
	
	// Assign Values name using strcpy function;
	strcpy(record.name, "Balan");    
	record.mark = 89;
 
	// Print Strcutre Memebrs Values
	printf("Student Id   : %d \n", record.id);
	printf("Student Name : %s \n", record.name);
	printf("Student Mark : %d \n", record.mark);
	
	return 0;
}