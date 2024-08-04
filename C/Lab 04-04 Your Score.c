#include<stdio.h>
int main()
{
    double num;
    scanf("%lf", &num);
    if((num < 0) || (num > 100))
    {
        printf("Out of Range");
    }
    else if(num >= 80)
    {
        printf("A");
    }
    else if(num >= 70)
    {
        printf("B");
    }
    else if(num >= 60)
    {
        printf("C");
    }
    else if(num >= 50)
    {
        printf("D");
    }
    else if(num >= 0)
    {
        printf("F");
    }
    return 0;
}