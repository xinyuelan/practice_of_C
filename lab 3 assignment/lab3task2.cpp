#include<stdio.h>
#include<stdlib.h>
#include<time.h>
float getRand() {
	return rand() / (RAND_MAX + 1.0);
}
int rollDie(int number_of_sides) {
	int a = 1 + getRand()*number_of_sides;
	return a;
}
int main() {
	srand(time(NULL)); // init random
	getRand(); // kick-start the random numbers
	int value = 0;
	value = rollDie(6);
	printf("6-sided die: %i\n", value);
	value = rollDie(20);
	printf("20-sided die: %i\n", value);
	getchar();
}
