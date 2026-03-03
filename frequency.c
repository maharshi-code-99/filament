#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}

/*


Enter a string: banana
Enter a character to find frequency: a

Frequency of a = 3

*/