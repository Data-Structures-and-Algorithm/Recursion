#include<stdio.h>
#include<stdlib.h>

int sum(int n);

int main() 
{

	printf("%d\n", sum(26587));
	
	return 0;
}


int sum(int n)
{

	if (n / 10 == 0) {
		return n;
	}

	return sum(n / 10) + (n % 10);
}

