//STRUCTURE//
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int id;
    int experience;
    float salary;
};
int main()
{

    int i=0;
    struct employee s[5];
    for(i=0;i<=4;i++)
    {
        //printf("enter details of employee %d \n",i+1);
        printf("\nenter name %d:",i+1);
        scanf("%s",&s[i].name);
        printf("enter id%d:",i+1);
        scanf("%d",&s[i].id);
        printf("enter experience%d:",i+1);
        scanf("%d",&s[i].experience);
        printf("enter the salary%d:",i+1);
        scanf("%f",&s[i].salary);
    }
    for(i=0;i<=4;i++)
    {
        printf("\n\n name:%s",s[i].name);
        printf("\n id:%d",s[i].id);
        printf("\n experience:%d",s[i].experience);
        printf("\n salary:%f",s[i].salary);
    }
    return 0;
}
