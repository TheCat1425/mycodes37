#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function to remove repetitive vowels in a string
void removeRepetitiveVowels(char str[])
{
    int i, j, len;
    len = strlen(str);
    for (i = 0, j = 0; i < len; i++)
    {
        if (i == 0 || str[i] != str[i - 1] || !isalpha(str[i]) || !strchr("AEIOUaeiou", str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main()
{
    char sentence[1000];
    printf("Enter a sentence:\n");
    fgets(sentence, 1000, stdin);
    removeRepetitiveVowels(sentence);
    printf("Corrected sentence:\n%s", sentence);
    return 0;
}
