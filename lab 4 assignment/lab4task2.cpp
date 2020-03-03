#include<stdio.h>

int number() {
	int i;
	printf("input an integer:");
	scanf_s("%i", &i);
	return i;
}//to set the number of factors.


int main() {
	int arr[100];
	arr[0] = 0;
	arr[1] = 1;
	int i=0,z=0;
	z=number();
	for (i = 0; i <z; i++) {
		arr[i + 2] = arr[i] + arr[i + 1];
	}//calculate the array
	for (i = 0; i <z; i++) {
		printf("%i ", arr[i]);
	}
	getchar();
	getchar();

}
