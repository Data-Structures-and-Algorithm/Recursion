#include<stdio.h>
#include<stdlib.h>

long fibonacci(int n);

int main(int argc, char *argv[]) 
{

	printf("Sum = %ld\n", fibonacci(atoi(argv[1])));
	
	return 0;
}


long fibonacci(int n)
{
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		return 1;
	} 

	return fibonacci(n - 2) + fibonacci(n - 1);
}

