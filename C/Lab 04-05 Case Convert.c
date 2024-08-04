#include<stdio.h>
int main()
{
    char text;
    scanf("%c", &text);
    if ((int) text >= 97 && (int) text <= 122) {
        printf("%c", text - 32);
    } else if ((int) text >= 65 && (int) text <= 90) {
        printf("%c", text + 32);
    } else {
        printf("error");
    }
    return 0;
}