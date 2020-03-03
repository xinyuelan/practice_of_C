#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rollDie(int number_of_sides) {
	int a = 1 + rand() % number_of_sides;
		return a;
}
int main() {
	srand(time(NULL)); // init random
	rand(); // kick-start the random numbers
	int value = 0;
	value = rollDie(6);
	printf("6-sided die: %i\n", value);
	value = rollDie(20);
	printf("20-sided die: %i\n", value);
	getchar();
}
