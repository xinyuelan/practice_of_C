#include<stdio.h>
#include <stdlib.h>
int main() {
	char name[100] = {"Jane"};
	   printf("\nWhat's your name?\n");
	   gets_s(name);
	   printf("\nSo your name is %s.\n", name);
	system("pause");
	float a = 2.5;
	int distance_km = 1372;//It is a long distance, right?
	char hometown[20] = "Shanxi";//I love my hometown.
	printf("\nLet me introduce myself.");
	printf("The distance from here to my hometown, %s, is %d km.", hometown);
	printf("\nAnd it takes %.1f.hours' flight to come home.",a);
	printf("\nThe distance is also %.3f. miles.", distance_km / 1.609344);
	int c;
	printf("\nHow old are you?(integer)\n");
	scanf_s("%d", &c);
	printf("\nSo you are %d years old.", c);
	char name_2[100] = { "Amy" };
	printf("\nInput your mother's name\n");
	scanf_s("%s", name_2,90);
	printf("\nSo your mother's name is %s", name_2);
	
	   getchar();
	   getchar();
	   getchar();
	   getchar();
	   getchar();

}
