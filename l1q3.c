#include <stdio.h>
struct student
{
    char name[100];
    int marks;
};
int main()
{
    struct student std[20];
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name and marks of student: ");
        scanf("%s", &std[i].name);
        scanf("%d", &std[i].marks);
    }
    printf("Students Name\t\tMarks in C\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t\t%d\n", std[i].name, std[i].marks);
    }
    return 0;
}