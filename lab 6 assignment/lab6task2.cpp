#include<stdio.h>
int item; int customer;
struct Change{                                     //to define a structure
	int number_200;
	int number_100;
	int number_50;
	int number_20;
	int number_10;
	int number_5;
	int number_2;
	int number_1;
};
struct Change getChange(int item,int customer){    //to calculate the number of each kind of coins
	struct Change coins;
	printf("Customer gives %d pences,item(s) cost %d pences.\n", customer, item);
	int a = customer - item;
	coins.number_200 = a / 200;
	coins.number_100 = (a % 200) / 100;
	coins.number_50 = (a % 100) / 50;
	coins.number_20 = (a % 50) / 20;
	coins.number_10 = ((a%50) % 20) / 10;
	coins.number_5 = (((a % 50) % 20) % 10) / 5;
	coins.number_2 =((((a % 50) % 20) % 10) % 5) / 2;
	coins.number_1 = (((((a % 50) % 20) % 10) % 5) % 2);
	return coins;
}

void printChange(struct Change coins) {           //print out the table
	printf("Give customer:\n");
	printf("200  100  50  20  10  5  2  1\n");
	printf("%d    %d    %d   %d   %d   %d  %d  %d\n\n", coins.number_200, coins.number_100, coins.number_50, 
		coins.number_20, coins.number_10, coins.number_5, coins.number_2, coins.number_1);
}


int main() {                                    //copy the main function
	struct Change coins;
	coins = getChange(7, 10);
	printChange(coins);
	coins = getChange(56, 70);
	printChange(coins);
	coins = getChange(124, 200);
	printChange(coins);
	coins = getChange(1232, 2000);
	printChange(coins);
	getchar();
	return 0;
}