#include <stdio.h>
int main()
{
    double price, sell, buy;
    scanf("%lf\n%lf\n%lf", &price, &sell, &buy);
    printf("%.2lf", (price*((100-sell)/100))*buy);
    return 0;
}