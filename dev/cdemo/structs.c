#include <stdio.h>
struct student
{
    char firstname[50];
    char lastname[50];
    float age;
    float studentid;
    int roll;
} s[10];

int main()
{
    int i;

    printf("Enter student information:\n");

    // storing information
    for(i=0; i<10; ++i)
    {
        s[i].roll = i+1;

        printf("\nStudent %d,\n",s[i].roll);

        printf("Enter first name: ");
        scanf("%s",s[i].firstname);

        printf("Enter last name: ");
        scanf("%s",s[i].lastname);

        printf("Enter age: ");
        scanf("%s",s[i].age);

        printf("Enter student id: ");
        scanf("%s",s[i].studentid);

        printf("\n");
    }

    printf("Student Information:\n\n");
    // displaying information
    for(i=0; i<10; ++i)
    {
        printf("\nStudent: %d\n",i+1);
        printf("First name: ");
        puts(s[i].firstname);
        printf("Last name: ");
        puts(s[i].lastname);
        printf("age: %.1f",s[i].age);
        printf("student id: %.1f",s[i].studentid);
        printf("\n");
    }
}
