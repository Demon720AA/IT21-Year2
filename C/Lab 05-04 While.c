#include<stdio.h>
int main()
{
    int num, loop = 1;
    scanf("%d", &num);
    while(loop <= num)
    {
        printf("%d ", loop++);
    }
    return 0;
}