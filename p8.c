#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
        printf("Number");
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}
