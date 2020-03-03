#include<stdio.h>
int number;
char arr[3][3] = { { '.','.','.' },{ '.', '.', '.' } ,{ '.', '.', '.' } };
void print_point(char arr[3][3]) {
	int i,j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}

int row(int number){
	int a;
	a =2-number / 3;
	return a;
}
int column(int number) {
	int b;
	b = number % 3-1;
	return b;
}
	
    
int main() {
	print_point(arr);
	printf("\n\n\n\n\n\n");
	do {
		printf("please input an integer between 1 and 9:");
		scanf_s("%d", &number);
		if (arr[row(number)][column(number)] == 'x') {
			printf("Warning!The square has been occupied.");
		}
		else {
			arr[row(number)][column(number)] = 'x';
			print_point(arr);
			printf("\n\n\n\n\n\n");
		}
		getchar();
		getchar();
	} while (1);
	getchar();
	getchar();
}