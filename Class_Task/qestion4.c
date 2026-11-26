#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[50], gender[20], contact[20];
    char special[] = "#$%&@!*+-?";
    char password[9];
    int digits, sp, i;

    srand(time(0));

    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    printf("Enter your gender: ");
    scanf(" %19[^\n]", gender);

    printf("Enter your contact number: ");
    scanf(" %19s", contact);

    printf("Enter number of special characters: ");
    scanf("%d", &sp);

    printf("Enter number of digits: ");
    scanf("%d", &digits);

    if(strlen(name) < 3 || sp < 0 || digits < 0 ||
       sp + digits != 5)
    {
        printf("Invalid input. Password needs 3 name characters and 5 remaining characters.\n");
        return 0;
    }

    for(i = 0; i < 3; i++)
    {
        password[i] = name[i];
    }

    for(i = 0; i < digits; i++)
    {
        if(i >= strlen(contact))
        {
            printf("Contact number has insufficient characters.\n");
            return 0;
        }

        password[3 + i] = contact[i];
    }

    for(i = 0; i < sp; i++)
    {
        password[3 + digits + i] =
            special[rand() % strlen(special)];
    }

    password[8] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}