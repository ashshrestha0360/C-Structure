#include <stdio.h>
struct per
{
    int pid;
    char name[100];
    char addr[100];
    int age;    
};

void main()
{
    struct per p;
    scanf("%d %s %s %d", &p.pid, p.name, p.addr, &p.age);
    printf("%d \t%s \t%s \t%d", p.pid, p.name, p.addr, p.age);
}