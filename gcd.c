#include<stdio.h>
#include<stdlib.h>

int gcd(int base, int power);

int main(int argc, char *argv[]) 
{

	printf("%d\n",gcd(atoi(argv[1]), atoi(argv[2])));
	
	return 0;
}


int gcd(int num1, int num2)
{
	if (num2 == 0) {
		return num1;
	} 

	return gcd(num2, num1 % num2);
}

