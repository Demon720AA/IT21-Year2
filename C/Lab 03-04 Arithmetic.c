#include <stdio.h>
int main()
{
    double num_1, num_2, sum, dif, pro, quo;
    scanf("%lf,%lf", &num_1, &num_2);
    sum = num_1 + num_2;
    dif = num_1 - num_2;
    pro = num_1 * num_2;
    quo = num_1 / num_2;
    printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\nThe product of the given numbers : %lf\nThe quotient of the given numbers : %lf", sum, dif, pro, quo);
    return 0;
}
