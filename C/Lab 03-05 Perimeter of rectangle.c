#include <stdio.h>
int main ()
{
    double num_1, num_2;
    scanf("%lf\n%lf", &num_1, &num_2);
    printf("Perimeter of rectangle = %.4f units", num_1*2+num_2*2);
    return 0;
}