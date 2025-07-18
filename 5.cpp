#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
int main() 
{
    char name[MAX_NAME_LENGTH];
    double wage, hours, gross, tax_pct, tax_amt, net;
    double total_hours = 0.0, total_gross = 0.0, total_tax = 0.0, total_net = 0.0;
    printf("Enter employee details ('done' for name to finish).\n");
    while (1) 
	{
        printf("\nEnter employee name ('done' to finish): ");
        scanf("%s", name); 
        if (strcmp(name, "done") == 0) break;
        printf("Enter hourly wage for %s: Php", name);
        scanf("%lf", &wage);
        printf("Enter hours worked for %s: ", name);
        scanf("%lf", &hours);
        gross = wage * hours; 
        if (gross <= 300.00) tax_pct = 0.10;
        else if (gross <= 550.00) tax_pct = 0.13;
        else if (gross <= 800.00) tax_pct = 0.16;
        else tax_pct = 0.20;
        tax_amt = gross * tax_pct; 
        net = gross - tax_amt;     
        printf("\n--- Pay Details for %s ---\n", name);
        printf("Gross Pay: P%.2f\nTax Pct: %.0f%%\nTax Amt: P%.2f\nNet Pay: P%.2f\n",
               gross, tax_pct * 100, tax_amt, net);
        total_hours += hours;
        total_gross += gross;
        total_tax += tax_amt;
        total_net += net;
    }
    printf("\n--- Overall Payroll Summary ---\n");
    printf("Total Hours: %.2f\nTotal Gross: P%.2f\nTotal Withholding: P%.2f\nTotal Net: P%.2f\n",
           total_hours, total_gross, total_tax, total_net);
    return 0;
}


