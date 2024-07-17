#include <stdio.h>
int main()
{
    float num_1, num_2, num_3, num_4, plus_all;
    scanf("%f\n%f\n%f\n%f", &num_1, &num_2, &num_3, &num_4);
    plus_all = num_4+num_2+num_1+num_3;
    printf("Summation is %.2f\nAverage is %.3f", plus_all, plus_all/4);
    return 0;
}