#include <stdio.h>
#include <limits.h>
int main() 
{
    int numbers[12], count = 0, input_num, i;
    int largest = INT_MIN, smallest = INT_MAX;
    printf("Enter numbers (up to 12). Enter -1 to stop:\n");
    while (count < 12) 
	{
        printf("Enter number %d (-1 to stop): ", count + 1);
        scanf("%d", &input_num);
        if (input_num == -1) break; 
        numbers[count] = input_num; 
        if (numbers[count] > largest) largest = numbers[count];
        if (numbers[count] < smallest) smallest = numbers[count];
        count++; 
    }
    printf("\n--- Results ---\n");
    if (count == 0) 
	{
        printf("No numbers were entered.\n");
    } else 
	{
        printf("All numbers entered:\n");
        for (i = 0; i < count; i++) printf("%d ", numbers[i]);
        printf("\nLargest number: %d\nSmallest number: %d\n", largest, smallest);
    }
    return 0; 
}



