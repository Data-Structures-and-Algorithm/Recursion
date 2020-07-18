#include<stdio.h>
#include<stdlib.h>

int print(int n);

int main() 
{

	printf("%d\n", print(5));
	
	return 0;
}


int print(int n)
{
	int sum;

	if (n == 0) {
		return 0;
	} 
	
	sum = n + print(n - 1);

	printf("%d\n", n);

	return sum;
}

