#include<stdio.h>
int main() {
	char animals_name[40];//let us play a game.
	printf("\nInput a name of animals.\n");
	gets_s(animals_name);
	
	int a=7;
	printf("\nInput an integer.\n");
	scanf_s("%d", &a);
	
	float time_hours= 10.8;
	printf("\nInput a float.\n");
	scanf_s("%f", &time_hours);//let me write a funny story.
	
	printf("\nWith a %s in his arm, a %d year-old man walked in a fire station.It took him %.2f minutes to walk here.", animals_name,a,time_hours*60);
	printf("\n'I have a surprise for you,'he said");
	
	getchar();
	getchar();

}