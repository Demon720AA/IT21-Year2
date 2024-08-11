#include<stdio.h>
#include<string.h>

int main() {
    char word[100], reverse[100];
    int j = 0;
    scanf("%[^\n]", word);
    for (int i = strlen(word) - 1; i >= 0; i--) {
        reverse[j++] = word[i];
    }
    if (strcmp(word, reverse) == 0) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
    return 0;
}