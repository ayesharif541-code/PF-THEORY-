
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[1000];
    int choice, i, len;

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';     // remove newline
    len = strlen(text);

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Count number of characters\n");
        printf("2. Count number of words\n");
        printf("3. Search a character\n");
        printf("4. Count vowels, consonants and spaces\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        if (choice == 1)
        {
            printf("Total characters = %d\n", len);
        }
        else if (choice == 2)
        {
            int words = 0, inWord = 0;
            for (i = 0; i < len; i++)
            {
                if (!isspace((unsigned char)text[i]))
                {
                    if (!inWord) { words++; inWord = 1; }
                }
                else
                    inWord = 0;
            }
            printf("Total words = %d\n", words);
        }
        else if (choice == 3)
        {
            char ch;
            int found = 0;
            printf("Enter character to search: ");
            scanf(" %c", &ch);
            for (i = 0; i < len; i++)
            {
                if (text[i] == ch)
                {
                    printf("'%c' found at position %d\n", ch, i + 1);
                    found++;
                }
            }
            if (found == 0)
                printf("'%c' not found.\n", ch);
            else
                printf("'%c' appears %d time(s).\n", ch, found);
        }
        else if (choice == 4)
        {
            int vowels = 0, consonants = 0, spaces = 0;
            for (i = 0; i < len; i++)
            {
                char c = tolower((unsigned char)text[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    vowels++;
                else if (c >= 'a' && c <= 'z')
                    consonants++;
                else if (c == ' ')
                    spaces++;
            }
            printf("Vowels = %d\nConsonants = %d\nSpaces = %d\n",
                   vowels, consonants, spaces);
        }
        else if (choice != 5)
        {
            printf("Invalid choice, try again.\n");
        }
    } while (choice != 5);

    return 0;
}