#include<stdio.h>
#include<stdlib.h>

long sum(int n);

int main() 
{

	printf("Sum = %ld\n", sum(9));
	
	return 0;
}


long sum(int n)
{
	if (n == 1) {
		return 1;
	} 

	return n + sum(n - 1);
}

