#include<stdio.h>
union
{
    char name[25];
    int idno;
    float salary;
}desc;
void main()
{
    strcpy(desc.name,"harsha");
    printf("employee details\n");
    printf("the name is %s\n",desc.name);
    printf("the idno is %d\n",desc.idno);
    printf("the salary is %6.2f\n",desc.salary);
    desc.idno=10;
    printf("employee details\n");
    printf("the name is %s",desc.name);
    printf("the idno is %d\n",desc.idno);
    printf("the salary is %6.2f\n",desc.salary);
    desc.salary=6500.00;
    printf("employee details\n");
    printf("the name is %s\n",desc.name);
    printf("the idno is %d\n",desc.idno);
    printf("the salary is %6.2f\n",desc.salary);
    return 0;
}
