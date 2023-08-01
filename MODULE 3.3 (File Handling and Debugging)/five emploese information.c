//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age 

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main()
{

    struct Employee employees[5];

 
    for (int i = 0; i < 5; i++) {
        printf("Enter Employee %d details:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        getchar(); 

        printf("Employee Name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        employees[i].empname[strcspn(employees[i].empname, "\n")] = '\0'; 

        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0'; 
        printf("Age: ");
        scanf("%d", &employees[i].age);
        getchar(); 

        printf("\n");
    }

    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}
