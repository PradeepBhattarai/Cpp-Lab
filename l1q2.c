#include <stdio.h>
int main()
{
    char *line = "idea without execution is worthless";
    char *c;
    c = line;
    while (*c != '\0')
    {
        if (*c == 'c')
        {
            printf("Found %c in position %d\n", *c, (int)(c - line));
        }
        c++;
    }
    return 0;
}