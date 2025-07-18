#include <stdio.h>
int main() 
{
    char *class_names[] = {"Invalid", "Yoga 1", "Yoga 2", "Children's Yoga", "Prenatal Yoga", "Senior Yoga"};
    int class_counts[6] = {0}; 
    int class_number, num_classes = 5;
    printf("Classes:\n1 -> Yoga 1\n2 -> Yoga 2\n3 -> Children's Yoga\n4 -> Prenatal Yoga\n5 -> Senior Yoga\nEnter 0 to stop.\n");
    while (1) 
	{
        printf("\nEnter class number (1-5, or 0 to stop): ");
        scanf("%d", &class_number);
        if (class_number == 0) break; 
        if (class_number >= 1 && class_number <= num_classes) 
		{
            printf("Request for: %s\n", class_names[class_number]);
            class_counts[class_number]++;
        } else 
		{
            printf("Invalid class number. Enter 1-%d.\n", num_classes);
        }
    }
    printf("\n--- Class Request Summary ---\n");
    for (int i = 1; i <= num_classes; i++) {
        printf("Class %d: %-15s - Requests: %d\n", i, class_names[i], class_counts[i]);
    }
    return 0; 
}



