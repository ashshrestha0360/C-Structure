#include <stdio.h>
#include <string.h>
struct cust
{
    char ac[10];
    char name[100];
    float bal;
};
void main()
{
    int n, i;
    float min_bal = 2000;
    printf("Enter the no. of employee:\n");
    scanf("%d", &n);
    struct cust c[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the account, name and balance\n");
        scanf("%s %s %f", c[i].ac, c[i].name, &c[i].bal);
    }
    for (i = 0; i < n; i++)
    {
        if (c[i].bal < min_bal)
        {
            printf("****Less than Minimum Balance\n");
            printf("%s\t%f\n", c[i].name, c[i].bal);
        }
    }
    for (i = 0; i < n; i++)
    {
        char temp_ac[10];
        printf("Enter the account\n");
        scanf("%s", temp_ac);
        if (strcmp(temp_ac, c[i].ac) == 0)
        {
            printf("%c\t%c\t%f\n", c[i].ac, c[i].name, c[i].bal);
        }
    }
    // float high_bal = 0;
    // for (i = 0; i < n; i++)
    // {
    //     if(c[i].bal > high_bal)
    //     {
    //         printf("%s", c[i].name);
    //     }
    // }
}
