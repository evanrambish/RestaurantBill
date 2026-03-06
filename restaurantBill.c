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

    // Define meal options and prices

    const char *meals[] = {"Salad", "Soup", "Sandwich", "Pizza"};
    double prices[] = {9.95, 4.55, 13.25, 22.35};

    // Randomly select a meal

    srand(time(NULL));
    int mealIndex = rand() % 4;
    double mealCost = prices[mealIndex];

    printf("Randomly selected meal: %s - $%.2f\n", meals[mealIndex], mealCost);

    return 0;
}