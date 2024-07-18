#include <stdio.h>
int main()
{
    float cm, kg;
    scanf("%f\n%f", &cm, &kg);
    printf("%f", kg/((cm/100)*(cm/100)));
    return 0;
}