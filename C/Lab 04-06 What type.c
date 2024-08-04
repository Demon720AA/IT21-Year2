#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    scanf("%c", &character);
    if (islower(character)) {
        printf("lowercase\n");
    } else if (isupper(character)) {
        printf("uppercase\n");
    } else if (isdigit(character)) {
        printf("number\n");
    } else {
        printf("error\n");
    }
    return 0;
}