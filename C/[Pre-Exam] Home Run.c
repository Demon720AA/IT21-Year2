#include<stdio.h>
int main()
{
    int count = 0, num;
    double distanc, stadium;

    scanf("%d\n%lf\n", &num, &distanc);

    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &stadium);
        if(stadium < distanc)
        {
            count += 1;
        }
    }
    printf("%d",count);
    return 0;
}