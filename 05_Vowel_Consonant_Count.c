#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str, *ptr;
    int vowels = 0, consonants = 0;

    str = (char *)malloc(100 * sizeof(char));

    if(str == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    ptr = str;

    while(*ptr != '\0')
    {
        if((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
        {
            if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||
               *ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
                vowels++;
            else
                consonants++;
        }
        ptr++;
    }

    printf("Number of Vowels = %d\n", vowels);
    printf("Number of Consonants = %d\n", consonants);

    free(str);

    return 0;
}
