// Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average

#include <stdio.h>
int main()
{
    int exp[100], exp1[100], exp2[100];
    int n, i, j;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    // Year 2020
    printf("Enter the Expenditure of every months of 2020\n");
    for (i = 0; i < 12; i++)
    {
        printf("Enter the Expenditure of %d month: ", i + 1);
        scanf("%d", &exp[i]);
    }
    printf("Enter the Expenditure of every months of 2021\n");
    for (i = 0; i < 12; i++)
    {
        printf("Enter the Expenditure of %d month: ", i + 1);
        scanf("%d", &exp1[i]);
    }
    printf("Enter the Expenditure of every months of 2022\n");
    for (i = 0; i < 12; i++)
    {
        printf("Enter the Expenditure of %d month: ", i + 1);
        scanf("%d", &exp2[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");

    // Display
    printf("The expenditures of every month in different year is shown below:\n");
    printf("Months  ");
    for (i = 0; i < 12; i++)
    {
        printf("%d\t", i + 1);
    }
    printf("Sum");
    printf("\t");
    printf("Average");
    printf("\n");
    printf("Years\n");
    // 2020
    printf("2020\t");
    for (i = 0; i < 12; i++)
    {
        printf("%d\t", exp[i]);
        sum1 = sum1 + exp[i];
    }
    printf("%d\t", sum1);
    printf("%.2f", (float)sum1 / 12);
    printf("\n");
    // 2021
    printf("2021\t");
    for (i = 0; i < 12; i++)
    {
        printf("%d\t", exp1[i]);
        sum2 = sum2 + exp1[i];
    }
    printf("%d\t", sum2);
    printf("%.2f", (float)sum2 / 12);
    printf("\n");
    // 2022
    printf("2022\t");
    for (i = 0; i < 12; i++)
    {
        printf("%d\t", exp2[i]);
        sum3 = sum3 + exp2[i];
    }
    printf("%d\t", sum3);
    printf("%.2f", (float)sum3 / 12);
    printf("\n");
    printf("Total Average \t%.2f", (float)(sum1 / 12 + sum2 / 12 + sum3 / 12) / 3);
    return 0;
}