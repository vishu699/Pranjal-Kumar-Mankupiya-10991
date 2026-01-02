#include <stdio.h>

int main() {
    int target = 100;
    
    // --- FOR LOOP IMPLEMENTATION ---
    int for_sum = 0;
    int for_iterations = 0;
    
    for (int i = 1; i <= target; i++) {
        for_sum += i;
        for_iterations++;
    }

    // --- WHILE LOOP IMPLEMENTATION ---
    int while_sum = 0;
    int while_iterations = 0;
    int j = 1;

    while (j <= target) {
        while_sum += j;
        while_iterations++;
        j++;
    }

    // --- RESULTS COMPARISON ---
    printf("Loop Optimization Demo\n");
    printf("----------------------------\n");
    printf("FOR LOOP:   Sum = %d | Iterations = %d\n", for_sum, for_iterations);
    printf("WHILE LOOP: Sum = %d | Iterations = %d\n", while_sum, while_iterations);
    
    return 0;
}