#include<stdio.h>

int ref(int num);

int main()
{
    int num;
    scanf("%d", &num);
    printf("method = %d", ref(num));
    return 0;
}

int ref(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        int keep = ref(num-2) + ref(num-1);
        return keep;
    }
}
