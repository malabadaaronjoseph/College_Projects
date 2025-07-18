#include <stdio.h>
int main() 
{
    int numbers[12];
    int i;
    printf("Please enter 12 numbers:\n");
    for (i = 0; i < 12; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nNumbers in reverse order of entry:\n");
    for (i = 11; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }
    return 0; 
}



