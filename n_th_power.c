#include<stdio.h>
#include<stdlib.h>

double pow(double base, double power);

int main(int argc, char *argv[]) 
{

	printf("%f\n",pow(atoi(argv[1]), atoi(argv[2])));
	
	return 0;
}


double pow(double base, double power)
{
	if (power == 1) {
		return base;
	} 

	return base * pow(base, power - 1);
}

