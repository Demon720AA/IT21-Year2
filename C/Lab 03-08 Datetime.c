#include <stdio.h>
int main()
{
    int num, day, hour, minute, secound;
    scanf("%d", &num);
    printf("%d s = %d d %d h %d m %d s", num, num/86400, num%86400/3600, num/60%60, num%60);
    return 0;
}