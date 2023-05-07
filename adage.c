#include <stdio.h>

struct Address {
    char street[100];
    char city[100];
};

struct Student {
    char name[100];
    int roll;
    struct Address address;
};

int main() {
    struct Student students[5];

    // read student details
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);

        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll);

        printf("Enter address details of student %d: \n", i+1);
        printf("Street: ");
        scanf("%s", students[i].address.street);

        printf("City: ");
        scanf("%s", students[i].address.city);

        printf("\n");
    }

    // print student details
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Address: %s, %s\n", students[i].address.street, students[i].address.city);
        printf("\n");
    }

    return 0;
}
