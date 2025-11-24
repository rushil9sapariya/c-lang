#include<stdio.h>
struct Student
{   
    char name[50];
    int sapid;
    double marks;
};
int main()
{
    struct Student student[5];
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("Enter name:");
        scanf("%s",&student[i].name);
        printf("Enter sap_id:");
        scanf("%d",&student[i].sapid);
        printf("Enter marks:");
        scanf("%lf",&student[i].marks);
        }
        printf("Students details:");
        
        for (int i = 0 ; i < 5 ; i++)
    {
        printf("Name: %s\n",student[i].name);
        printf("SapId:%d\n",student[i].sapid);
        printf("Marks:%lf\n",students[i]marks);
        }
        return 0;
}
