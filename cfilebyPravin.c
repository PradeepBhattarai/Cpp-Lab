
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct employee
{
    int empno;
    char name[20];
    float salary;
} emp;
void addRecord()
{
    emp e;
    FILE *myfile;
    myfile = fopen("employee.bin", "ab");
    printf("Enter Employee Number,Name and Salary: ");
    scanf("%d%s%f", &e.empno, e.name, &e.salary);
    fwrite(&e, sizeof(emp), 1, myfile);
    fclose(myfile);
    printf("Record Added");
}
void displayRecord()
{
    FILE *myfile;
    emp e;
    int count = 0;
    myfile = fopen("D:\\bct\\file4.bin", "rb");
    while (fread(&e, sizeof(emp), 1, myfile) == 1)
    {
        printf("%d\t%s\t%f\n", e.empno, e.name, e.salary);
        count++;
    }
    fclose(myfile);
    if (count == 0)
    {
        printf("No record Found");
    }
    else
    {
        printf("%d Records Found", count);
    }
}
void updateRecord()
{
    emp e;
    int tempempno;
    float newsalary;
    int count = 0;
    FILE *myfile;
    myfile = fopen("D:\\bct\\file4.bin", "r+b");
    printf("Enter the Employee Number Whose Salary is to be Increased");
    scanf("%d", &tempempno);
    while (fread(&e, sizeof(emp), 1, myfile) == 1)
    {
        if (e.empno == tempempno)
        {
            printf("Enter the new salary of %s", e.name);
            scanf("%f", &newsalary);
            e.salary = newsalary;
            fseek(myfile, -sizeof(emp), SEEK_CUR);
            fwrite(&e, sizeof(emp), 1, myfile);
            count++;
            printf("Salary Updatted");
            break;
        }
    }
    fclose(myfile);
    if (count == 0)
    {
        printf("Record Not Found");
    }
}
void deleteRecord()
{
    FILE *myfile, *temp;
    int tempempno;
    emp e;
    myfile = fopen("D:\\bct\\file4.bin", "rb");
    temp = fopen("D:\\bct\\temp.bin", "wb");
    printf("Enter the Employee Number Whose record is to be deleted");
    scanf("%d", &tempempno);
    while (fread(&e, sizeof(emp), 1, myfile) == 1)
    {
        if (e.empno != tempempno)
        {
            fwrite(&e, sizeof(emp), 1, temp);
        }
        else
        {
            printf("The %d Employee number record has been deleted", e.empno);
        }
    }
    fclose(myfile);
    fclose(temp);
    myfile = fopen("D:\\bct\\file4.bin", "wb");
    temp = fopen("D:\\bct\\temp.bin", "rb");
    while (fread(&e, sizeof(emp), 1, temp) == 1)
    {
        fwrite(&e, sizeof(emp), 1, myfile);
    }
    fclose(myfile);
    fclose(temp);
}
int main()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("Employee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Update Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addRecord();
            getch();
            break;
        case 2:
            displayRecord();
            getch();
            break;
        case 3:
            updateRecord();
            getch();
            break;
        case 4:
            deleteRecord();
            getch();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input");
            getch();
        }
    }
    return 0;
}