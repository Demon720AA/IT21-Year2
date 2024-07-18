#include <stdio.h>
#include <math.h>
int main()
{
    double price, radius, high, milliliter;
    scanf("%lf\n%lf\n%lf", &price, &radius, &high, &milliliter);
    milliliter = high * (3.14159265359 * pow(radius/2, 2));
    printf("Volume : %.2fml\nBaht/ml : %.4lf", milliliter, price/milliliter);
    return 0;
}