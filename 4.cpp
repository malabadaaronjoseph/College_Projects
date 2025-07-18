#include <stdio.h>
#include <string.h>
#define MAX_ADDINS 5
#define MAX_NAME_LENGTH 20
int main() 
{
    char addin_names[MAX_ADDINS][MAX_NAME_LENGTH] = {"Whipped cream", "Cinnamon", "Chocolate sauce", "Amaretto", "Irish whiskey"};
    double addin_prices[MAX_ADDINS] = {0.89, 0.25, 0.59, 1.50, 1.75};
    double total_price = 2.00;
    char input_addin[MAX_NAME_LENGTH];
    int i, found;
    printf("Coffee: P2.00. Add-ins:\n");
    for (i = 0; i < MAX_ADDINS; i++) printf("  %-15s : P%.2f\n", addin_names[i], addin_prices[i]);
    printf("Enter add-in name (or 'done' to finish):\n");
    while (1) 
	{
        printf("\nEnter add-in: ");
        scanf("%s", input_addin); 
        if (strcmp(input_addin, "done") == 0) break;
        found = 0;
        for (i = 0; i < MAX_ADDINS; i++) 
		{
            if (strcmp(input_addin, addin_names[i]) == 0) 
			{
                total_price += addin_prices[i];
                printf("Added %s (P%.2f). Current total: P%.2f\n", addin_names[i], addin_prices[i], total_price);
                found = 1;
                break;
            }
        }
        if (!found) printf("Sorry, we do not carry that.\n");
    }
    printf("\n--- Order Summary ---\n");
    printf("Total price: P%.2f\n", total_price);
    return 0;
}


