#include <stdio.h>
struct student
{
    int roll_no;
    char name[100];
    char address[100];
    char ph[10];
    char sec[10];
};
void main()
{
    struct student s[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        scanf("%d %s %s %s %s", &s[i].roll_no, s[i].name, s[i].address, s[i].ph, s[i].sec);
    }
    printf("Roll No\tName\tAddress\tPhone\tSection\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d\t%s\t%s\t%s\t%s\n", s[i].roll_no, s[i].name, s[i].address, s[i].ph, s[i].sec);
    }
}