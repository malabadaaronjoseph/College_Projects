#include <stdio.h>
int main() 
{
    int numbers[12];
    int count = 0; 
    int input_num; 
    int i;
    printf("Please enter numbers (up to 12). Enter -1 to stop:\n");
    while (count < 12) 
	{
        printf("Enter number %d (or -1 to stop): ", count + 1);
        scanf("%d", &input_num);
        if (input_num == -1) 
		{
            break; 
        }
        numbers[count] = input_num;
        count++; 
    }
    if (count == 0) 
	{
        printf("\nNo numbers were entered.\n");
    } else 
	{
        printf("\nNumbers in reverse order of entry:\n");
        for (i = count - 1; i >= 0; i--) 
		{
            printf("%d\n", numbers[i]);
        }
    }
    return 0; 
}



