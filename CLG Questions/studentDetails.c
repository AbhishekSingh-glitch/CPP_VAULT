// 10/9/2024
#include <stdio.h>

int main()
{
    struct student
    {
        int roll;
        char name[50];
        int marks;
    } stud[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter roll no. of student \t");
        scanf("%d", &stud[i].roll);

        printf("enter name of student \t");
        scanf("%[^\n]s", stud[i].name);

        printf("enter marks of student \t");
        scanf("%d", &stud[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", stud[i].roll);
        printf("%s\t", stud[i].name);
        printf("%d\n", stud[i].marks);
    }

    return 0;
}