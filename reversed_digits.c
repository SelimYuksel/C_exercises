#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number, remain, reversedNumber = 0, digits[20], i = 0;
	
	printf("Enter a number(max 20 digits allowed): ");
	scanf("%d", &number);
	
	
	while (number != 0) {
		remain = number % 10;
		digits[i++] = remain;
		reversedNumber = reversedNumber * 10 + remain;
		number /= 10;
	}
	
	printf("Reversed digits in array: ");
	
	for (int j = 0; j < i; j++) {
		printf("%d ", digits[j]);
	}
	
	return 0;

}
