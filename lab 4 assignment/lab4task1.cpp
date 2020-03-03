#include<stdio.h>
int horizontal(int a) {
	printf("\n+");
	int b;
	for (b = 0; b < a; b++) {
		printf("-");
	}
	printf("+");
	return 0;
}

int withPlayer(int a, int c) {
	printf("\n|");
	int x, y;
	for (x = 0; x < c; x++) {
		printf(".");
	}
	printf("@");
	for (y = 0; y < a-c-1; y++) {
		printf(".");
	}
	printf("|");
	return 0;
}
		
int withoutPlayer(int a){
	printf("\n|");
	int b = 0;
	for (b = 0; b < a; b++) {
		printf(".");
	}
	printf("|");
	return 0;
}

int drawRoom(int a, int b, int c, int d) {
	horizontal(a);
	int x, y;
	for (x = 0; x < d; x++) {
		withoutPlayer(a);
	}
	withPlayer(a, c);
	for (y = 0; y < b - d - 1; y++) {
		withoutPlayer(a);
	}
	horizontal(a);
	return 0;
}


int main() {
	drawRoom(2, 2, 0, 1); 
	drawRoom(5, 3, 1, 2); 
	drawRoom(14, 8, 8, 5);
	getchar(); 
	return 0;
}