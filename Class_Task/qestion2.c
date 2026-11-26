#include <stdio.h>
#include <string.h>

int main()
{
    char items[100][30];
    float prices[100];
    char name[30];
    int choice, n = 0, i, found;
    int qty, count;
    float total;

    do
    {
        printf("\n\n1. Add Items and Prices");
        printf("\n2. Fetch List of Items");
        printf("\n3. Edit Prices");
        printf("\n4. View All Items and Prices");
        printf("\n5. Create Receipt");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("How many items do you want to add? ");
            scanf("%d", &count);

            for(i = 0; i < count && n < 100; i++)
            {
                printf("Enter item name: ");
                scanf(" %29[^\n]", items[n]);

                printf("Enter price: ");
                scanf("%f", &prices[n]);

                n++;
            }
        }

        else if(choice == 2)
        {
            printf("\nAvailable Items:\n");

            for(i = 0; i < n; i++)
            {
                printf("%s\n", items[i]);
            }
        }

        else if(choice == 3)
        {
            printf("Enter item name to edit price: ");
            scanf(" %29[^\n]", name);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(strcmp(items[i], name) == 0)
                {
                    printf("Enter new price: ");
                    scanf("%f", &prices[i]);

                    printf("Price updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("Item not found.\n");
            }
        }

        else if(choice == 4)
        {
            printf("\nItem\t\tPrice\n");

            for(i = 0; i < n; i++)
            {
                printf("%s\t\t%.2f\n", items[i], prices[i]);
            }
        }

        else if(choice == 5)
        {
            total = 0;

            printf("How many different items did the customer buy? ");
            scanf("%d", &count);

            printf("\nReceipt\n");

            for(i = 0; i < count; i++)
            {
                printf("\nEnter item name: ");
                scanf(" %29[^\n]", name);

                printf("Enter quantity: ");
                scanf("%d", &qty);

                found = 0;

                for(int j = 0; j < n; j++)
                {
                    if(strcmp(items[j], name) == 0)
                    {
                        printf("%s  x %d  = %.2f\n",
                               items[j], qty, prices[j] * qty);

                        total = total + prices[j] * qty;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Item not found.\n");
                }
            }

            printf("\nTotal Bill: %.2f\n", total);
        }

        else if(choice == 6)
        {
            printf("Program ended.\n");
        }

        else
        {
            printf("Invalid choice.\n");
        }

    } while(choice != 6);

    return 0;
}