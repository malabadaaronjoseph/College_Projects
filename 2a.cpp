#include <stdio.h>
#include <limits.h> 
int main() 
{
    int numbers[12];
    int i;
    int largest = INT_MIN; 
    int smallest = INT_MAX; 
    printf("Please enter 12 numbers:\n");
    for (i = 0; i < 12; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] > largest) 
		{
            largest = numbers[i];
        }
        if (numbers[i] < smallest) 
		{
            smallest = numbers[i];
        }
    }
    printf("\n--- Results ---\n");
    printf("All numbers entered:\n");
    for (i = 0; i < 12; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    return 0; 
}



