#include <stdio.h>

long long countGrainsOnCell(int cell) {
    if (cell == 1) {
        return 1;
    } else {
        return 2 * countGrainsOnCell(cell - 1);
    }
}

int main() {
    int cell;
    
    printf("Enter an integer from 1 to 64: ");
    scanf("%d", &cell);
    
   if (cell < 1 || cell > 64) {
        printf("The cell number is incorrect.\n");
        return 1;
    }

    long long grains = countGrainsOnCell(cell);
    printf("Number of grains per cel %d: %lld\n", cell, grains);
    
    return 0;
}
