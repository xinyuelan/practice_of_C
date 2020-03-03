#include<stdio.h>
//this is my lab3 task.

double ohm_law(int V, double R) //use the ohm's law
{
	double I = 0;
	I = V / R;
	return I;
}

double parallel(double r1, double r2)
{
	double R = 1/(1 / r1 + 1 / r2 );
	return R;
}

double series(double r1, double r2)
{
	double R = r1 + r2;
	return R;
}

int main() {
	double r1 = 123, r2 = 234, r3 = 345, r4 = 456, r5 = 567, r6 = 678, r7 = 789;
	int V = 12;
	double R1 = parallel(r3, r4);
	double R2 = parallel(r6, r7);
	double R3 = series(R2, r5);
	double R4 = series(r1, r2);
	double R =1/( 1 / R3 + 1 / R4 + 1 / R1);
	double I = 1000*ohm_law(V, R);
	printf("The current is %.1fmA.", I);
	getchar();

}

