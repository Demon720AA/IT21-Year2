#include<stdio.h>
#include <ctype.h>
int main()
{
    int char_num, histogram[26] = {0}, order = 0;
    char chr, histogram_order[26] = {0};
    scanf("%d", &char_num);
    for (int i = 0; i < char_num; i++) {
        scanf(" %c", &chr);
        chr = tolower(chr);
        while (histogram_order[order] != 0 && histogram_order[order] != chr) 
            order++;
        histogram_order[order] = chr;
        histogram[order]++;
        order = 0;
    }

    for (int i = 0; histogram_order[i] != 0 && i < 26; i++) {
        printf("%c: %d\n", histogram_order[i], histogram[i]);
    }

    return 0;
}