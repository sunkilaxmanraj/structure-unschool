//STRUCTURE//
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    int i=0;
    struct employee s;
    for(i=0;i<=4;i++)
    {
        printf("enter name%d:",i+1);
        gets(s.name);
        printf("enter id%d:",i+1);
        scanf("%d",&s.id);
        printf("enter the salary%d:",i+1);
        scanf("%f",&s.salary);
    }
    for(i=0;i<=4;i++)
    {
        printf("\nname:%s",i+1,s.name);
        printf("\nid:%d",i+1,s.id);
        printf("\nsalary:%f",i+1,s.salary);
    }
    return 0;
}
