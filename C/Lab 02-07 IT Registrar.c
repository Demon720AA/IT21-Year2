#include <stdio.h>
int main()
{
    char name[30], surname[30], id[9];
    int dd, mm, yy;
    double gpa;
    scanf("%s\n%s\n", name, surname);       //Name Surname
    scanf("%s\n", id);                      //66070000
    scanf("%d/%d/%d\n", &dd, &mm, &yy);     //01/01/2077
    scanf("%lf", &gpa);

    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
    printf("GPA: %.2lf\n", gpa);
    return 0;
}