#include<stdio.h>
int main()
{
    char text;
    scanf("%c", &text);
    if((text == 'A') || (text == 'a'))
    {
        printf("Genius");
    }
    else if((text == 'B') || (text == 'b'))
    {
        printf("Good");
    }
    else if((text == 'C') || (text == 'c'))
    {
        printf("Try Harder");
    }
    else if((text == 'D') || (text == 'd'))
    {
        printf("Very Bad");
    }
    else if((text == 'F') || (text == 'f'))
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}