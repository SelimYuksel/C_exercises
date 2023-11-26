#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int find_smallest_int(const int array[], size_t length) {
	
	if(length == 0) {        //If the length of the array is zero, stop the program
		return 0;
	}
	
	int smallest = array[0];
	
	for(size_t i = 0; i < length; i++) {
		if(array[i] < smallest) {
			smallest = array[i];
		}
	}
	
	return smallest;
}

int main() {
	
	int size;
	
	printf("Enter the size: ");
	scanf("%d", &size);
	
	int numbers[size]; //Declare 'numbers' after getting 'size'
	
	for (int i = 0; i < size; i++) {
		printf("Enter the number %d: ", i+1);
		scanf("%d", &numbers[i]);
	}
	
	int smallest = find_smallest_int(numbers, size);
	
	printf("Smallest number is: %d\n", smallest);
	
	return 0;
		
}
