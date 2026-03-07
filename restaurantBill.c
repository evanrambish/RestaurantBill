#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// restaurantBill.c
// Program to calculate tax and tip for a random meal
// 1. Define meal options and prices
// 2. Randomly select a meal
// 3. Read tax and tip from command line
// 4. Calculate tax amount, tip amount, and total
// 5. Print meal, tax, tip (to STDERR), total 

int main(int argc, char *argv[]) {

    // Check that tax and tip percentages were passed

    if(argc < 3){
        printf("Usage: restaurantBill <tax_percent> <tip_percent>\n");
        printf("Example: restaurantBill 8 15\n");
        return 1;
    }

    // Read tax and tip percentages

    double taxPercent = atof(argv[1]);
    double tipPercent = atof(argv[2]);

    // Define meal options and prices

    const char *meals[] = {"Salad", "Soup", "Sandwich", "Pizza"};
    double prices[] = {9.95, 4.55, 13.25, 22.35};

    // Randomly select a meal

    srand(time(NULL));
    int mealIndex = rand() % 4;
    double mealCost = prices[mealIndex];

    double taxAmount = mealCost * (taxPercent / 100);
    double tipAmount = mealCost * (tipPercent / 100);
    double totalBill = mealCost + taxAmount + tipAmount;

    printf("Randomly selected meal: %s - $%.2f\n", meals[mealIndex], mealCost);
    printf("Tax Amount: $%.2f\n", taxAmount);
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}