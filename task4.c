#include <stdio.h>

int sum_to_n(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
	int num;
    
    printf("Enter positive integer number: ");
    scanf("%d", &num);
 
	printf("Sum of the numbers from 1 to %d: = %d", num, sum_to_n(num));
    return 0;
}
