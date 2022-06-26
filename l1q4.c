// Write a program to read name, rollno, address, and phone number of each student in your class using structure.Store the information in file so that you can recover the information later.While recovering the information from the file sort the information alphabetically according to the name.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[30];
    int rollno;
    char address[30];
    int phoneno;
};
int main()
{
    struct student studs, studs1;
    int n, i;

    FILE *fp;
    fp = fopen("student.bin", "wb+");
    if (fp == NULL)
    {
        printf("Invalid Address");
        exit(0);
    }
    else
    {
        printf("File Created\n");
        printf("Enter the no of students: ");
        scanf("%d", &n);
        printf("Enter the name of student: ");
        scanf("%s", studs.name);
        printf("Enter the roll no: ");
        scanf("%d", &studs.rollno);
        printf("Enter the Address: ");
        scanf("%s", studs.address);
        printf("Enter the Phone no: ");
        scanf("%d", &studs.phoneno);

        fwrite(&studs, sizeof(studs), 1, fp);

        fseek(fp, 0, SEEK_SET);

        fread(&studs1, sizeof(studs), 1, fp);

        printf("\n Reading File...");

        printf("\nName:%s", studs1.name);
        printf("\nRollno:%d", studs1.rollno);
        printf("\nAddress:%d", studs1.address);
        printf("\nPhoneNo:%s", studs1.phoneno);
        fclose(fp);
    }

    return 0;
}