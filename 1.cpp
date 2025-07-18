#include <stdio.h>
int main() 
{
     int starRating, totalStars = 0, numRatings = 0, tries; 

    while (true) { 
        printf("Enter rating (0-4, negative number to quit): "); 
        if (scanf("%d", &starRating) != 1) { 
            printf("Invalid input. Enter number.\n"); while(getchar() != '\n'); continue; 
        }
        if (starRating < 0) break; 
        
        tries = 0; 
        while (tries < 3 && (starRating < 0 || starRating > 4)) { 
            tries++; // 11
            if (tries < 3) { // 12
                printf("Invalid. %d tries left. Enter 0-4: ", 3 - tries); 
                if (scanf("%d", &starRating) != 1) { 
                    printf("Invalid input. Enter number.\n"); while(getchar() != '\n'); starRating = -1;
                }
            }
        }
        
        if (starRating >= 0 && starRating <= 4) { totalStars += starRating; numRatings++; } 
        else { printf("Too many incorrect entries. New user.\n"); } 
    }

    if (numRatings > 0) printf("\nAverage rating: %.2f\n", (double)totalStars / numRatings); 
    else printf("\nNo valid ratings entered.\n"); 
    printf("\n"); 
}




