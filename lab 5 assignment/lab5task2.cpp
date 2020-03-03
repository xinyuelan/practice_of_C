#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int number1,number2;
char arr[3][3] = { { '.','.','.' },{ '.', '.', '.' } ,{ '.', '.', '.' } };

float getRand() {
	return rand() / (RAND_MAX + 1.0);
}

int range() {     //to have a random number between 1 and 9
	int a = 1 + getRand()*9;
	return a;
}

int row(int number) {    //calculate the number of row
	int a;
	a = (9-number) / 3;
	return a;
}

int column(int number) {  //calculate the number of column
	int b;
	b = 2-(9 - number) % 3 ;
	return b;
}

void print_point(char arr[3][3]) {   //to print out the array
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}

int judge(char arr[3][3]) {       //to judge who wins in 8 conditions
	if (arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]) {
		if (arr[0][0] == 'o') {
			return 1;
		}
		else if (arr[0][0] == 'x') {
			return 0;
		}
	}
	if (arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2]) {
		if (arr[1][0] == 'o') {
			return 1;
		}
		else if (arr[1][0] == 'x') {
			return 0;
		}
	}
	if (arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2]) {
		if (arr[2][0] == 'o') {
			return 1;
		}
		else if (arr[2][0] == 'x') {
			return 0;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) {
		if (arr[0][0] == 'o') {
			return 1;
		}
		else if (arr[0][0] == 'x') {
			return 0;
		}
	}
	if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]) {
		if (arr[0][0] == 'o') {
			return 1;
		}
		else if (arr[0][0] == 'x') {
			return 0;
		}
	}
	if (arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]) {
		if (arr[0][1] == 'o') {
			return 1;
		}
		else if (arr[0][1] == 'x') {
			return 0;
		}
	}
	if (arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2]) {
		if (arr[0][2] == 'o') {
			return 1;
		}
		else if (arr[0][2] == 'x') {
			return 0;
		}
	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]) {
		if (arr[0][2] == 'o') {
			return 1;
		}
		else if(arr[0][2] == 'x'){
			return 0;
		}
	}
}


int main() {
	int times = 0;
	print_point(arr);
	printf("\n\n\n\n\n\n");
	do {
		printf("please input an integer between 1 and 9:");
		scanf_s("%d", &number1);
		if (arr[row(number1)][column(number1)] == 'x'|| arr[row(number1)][column(number1)] == 'o') {
			printf("Warning!The square has been occupied.");
		}
		else {
			arr[row(number1)][column(number1)] = 'x';
			print_point(arr);
			printf("\n\n\n\n\n\n");
		}
		times++;
		judge(arr);
		switch (judge(arr)) {
		case 1: {
			printf("Computer win.");
			break;
		}
		case 0: {
			printf("You win.");
			break;
		}
		}
		srand(time(NULL));
		rand();
		number2 = range();
		printf("the random number is %d\n", number2);
		if (arr[row(number2)][column(number2)] == 'o'|| arr[row(number2)][column(number2)] == 'x') {
			printf("Warning!The square has been occupied.");
			srand(time(NULL));
			rand();
			number2 = range();
			printf("the random number is %d\n", number2); 
		}
		else {
			arr[row(number2)][column(number2)] = 'o';
			print_point(arr);
			printf("\n\n\n\n\n\n");
		}
		times++;
		judge(arr);
		switch (judge(arr)) {
		case 1: {
			printf("Computer win."); 
			break; 
		 }
		case 0: {
			printf("You win.");
			break;
		 }
		}
		
		getchar();
		getchar();
	} while (judge(arr)!=1&&judge(arr)!=0||times<9);
	getchar();
	getchar();
}