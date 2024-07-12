#include <stdio.h>
int main() {
    char str1, str2, str3, str4, str5;
    scanf("%c\n%c\n%c\n%c\n%c", &str1, &str2, &str3, &str4, &str5);
    printf("%c\n%c\n%c\n%c\n%c", str1+1, str2, str3+1, str4, str5+1);
    return 0;
}