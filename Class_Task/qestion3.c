#include <stdio.h>
#include <string.h>

int main()
{
    char tasks[12][31][100] = {{{0}}};
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month, date, i, choice;
    int year = 2026;

    strcpy(tasks[0][4], "Submit PF assignment");
    strcpy(tasks[1][9], "Prepare for quiz");
    strcpy(tasks[2][14], "Complete project");
    strcpy(tasks[5][19], "Attend meeting");
    strcpy(tasks[8][24], "Submit report");
    strcpy(tasks[11][29], "Final exam preparation");

    do
    {
        printf("\n\nCalendar Year: %d", year);
        printf("\n1. Add a Task");
        printf("\n2. Remove a Task");
        printf("\n3. Show All Tasks");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter month number (1-12): ");
            scanf("%d", &month);

            printf("Enter date: ");
            scanf("%d", &date);

            if(month >= 1 && month <= 12 &&
               date >= 1 && date <= days[month - 1])
            {
                printf("Enter task: ");
                scanf(" %99[^\n]", tasks[month - 1][date - 1]);

                printf("Task added successfully.\n");
            }
            else
            {
                printf("Invalid date or month.\n");
            }
        }

        else if(choice == 2)
        {
            printf("Enter month number: ");
            scanf("%d", &month);

            printf("Enter date: ");
            scanf("%d", &date);

            if(month >= 1 && month <= 12 &&
               date >= 1 && date <= days[month - 1])
            {
                tasks[month - 1][date - 1][0] = '\0';

                printf("Task removed successfully.\n");
            }
            else
            {
                printf("Invalid date or month.\n");
            }
        }

        else if(choice == 3)
        {
            for(i = 0; i < 12; i++)
            {
                printf("\nMonth %d:\n", i + 1);

                for(int j = 0; j < days[i]; j++)
                {
                    if(strlen(tasks[i][j]) > 0)
                    {
                        printf("Date %d: %s\n",
                               j + 1, tasks[i][j]);
                    }
                }
            }
        }

        else if(choice == 4)
        {
            printf("Calendar closed.\n");
        }

        else
        {
            printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}