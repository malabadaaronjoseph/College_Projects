#include <stdio.h>
#include <string.h> 
int main() 
{
    int class_number;
    printf("Downdog Yoga Studio Classes:\n");
    printf("1 -> Yoga 1\n");
    printf("2 -> Yoga 2\n");
    printf("3 -> Children's Yoga\n");
    printf("4 -> Prenatal Yoga\n");
    printf("5 -> Senior Yoga\n");
    printf("\nEnter class number: ");
    scanf("%d", &class_number);
    printf("Selected Class: ");
    switch (class_number) 
	{
        case 1:
            printf("Yoga 1\n");
            break;
        case 2:
            printf("Yoga 2\n");
            break;
        case 3:
            printf("Children's Yoga\n");
            break;
        case 4:
            printf("Prenatal Yoga\n");
            break;
        case 5:
            printf("Senior Yoga\n");
            break;
        default:
            printf("Invalid class number.\n"); 
            break;
    }
    return 0; 
}



