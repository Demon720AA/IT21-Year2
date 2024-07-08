#include <stdio.h>
int main()
{
    int num;
    char text[50];
    scanf("%d\n", &num);
    scanf("%[^\n]", &text);
    printf("Hello! My name is %s, %d", text, num);
    return 0;
}
