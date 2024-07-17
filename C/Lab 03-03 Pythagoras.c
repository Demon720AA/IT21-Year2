#include <stdio.h>
#include <math.h>
int main()
{
    float num_1, num_2;
    scanf("%f\n%f", &num_1, &num_2);
    printf("%.2f", sqrt(pow(num_1, 2)+pow(num_2, 2)));
    return 0;
}