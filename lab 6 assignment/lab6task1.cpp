#include<stdio.h>
#include <string.h>
int words(char para[100]) {          //to calculate the number of words
	int a = 0, i = 0;
	int length = strlen(para);
	for(i = 0; i<length; i++) {
		if (para[i] == ' ') {
			a++;
		}
	}
	return a+1;
}
int sentences(char para[100]) {     //to calculate the number of sentences
	int b = 0, i = 0;
	for (i = 0; i<100; i++) {
		if (para[i] == '.') {
			b++;
		}
	}
	return b;
}
int comma(char para[100]) {     //to calculate the number of sentences
	int c = 0, i = 0;
	for (i = 0; i<100; i++) {
		if (para[i] == ',') {
			c++;
		}
	}
	return c;
}
int semicolon(char para[100]) {     //to calculate the number of sentences
	int d = 0, i = 0;
	for (i = 0; i<100; i++) {
		if (para[i] == ';') {
			d++;
		}
	}
	return d;
}
int characters(char para[100]) {    //to calculate the number of characters
	int b = strlen(para) - words(para) + 1 - sentences(para)-semicolon(para)-comma(para);
	return b;
}
int main() {
	char para[100] = "I like cats. Cats like me. Miao miao miao. Dogs are bad. Bad dogs bad.";
	float index = 0.00;
	printf("words %d,characters %d,sentences %d\n", words(para), characters(para), sentences(para));
	//to check the numbers
	index = (5.89*characters(para) / words(para)) - (29.5*sentences(para) / words(para))-15.8;
	//to calculate the index
	printf("%.3f\n", index);
	if (index <= 1) {
		printf("the final index is 1.");
	}
	getchar();
}