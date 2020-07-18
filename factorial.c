#include<stdio.h>
#include<stdlib.h>

long fact(int n);

int main() 
{

	printf("Factorial = %ld\n", fact(5));
	
	return 0;
}


long fact(int n)
{
	if (n <= 1) {
		return 1;
	} 

	return n*fact(n - 1);
}

