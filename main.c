#include <stdio.h>

int main(void)
{
    // Declare variables
    int numberOfNotebooks = 4;
    float pricePerNotebook = 125.50f;
    char category = 'A';

    // Perform calculation
    float orderTotal = numberOfNotebooks * pricePerNotebook;

    // Display formatted output
    printf("Category: %c\n", category);
    printf("Number of notebooks: %d\n", numberOfNotebooks);
    printf("Price per notebook: %.2f\n", pricePerNotebook);
    printf("Order total: %.2f\n", orderTotal);

    return 0;
}