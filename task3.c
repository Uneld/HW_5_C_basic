#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum happy_state {YES, NO};

enum happy_state is_happy_number(int num) {
    int sum = 0, product = 1;

    while (num != 0) {
		product *= num % 10;
		sum += num % 10;
		num /= 10;
	}

    if (sum == product) {
        return YES; 
    } else {
        return NO; 
    }
}

int main() {
	int num;
	
	printf("Enter a natural number: ");
    scanf("%d", &num);

   
    printf("%s", (is_happy_number(num) == YES) ? "YES" : "NO");
 

    return 0;
}
