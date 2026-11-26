
#include <stdio.h>
#include <string.h>

#define WORDS 6
#define LEN 20

int main(void)
{
    char dict[WORDS][LEN] = {"apple", "book", "computer", "river", "window", "garden"};
    char search[LEN];
    int i, found = 0;

    printf("List of words:\n");
    for (i = 0; i < WORDS; i++)
        printf("%d. %s\n", i + 1, dict[i]);

    printf("\nEnter a word to search for: ");
    scanf("%19s", search);

    for (i = 0; i < WORDS; i++)
    {
        if (strcmp(dict[i], search) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("WORD FOUND IN DICTIONARY.\n");
    else
        printf("WORD NOT FOUND IN DICTIONARY.\n");

    return 0;
}