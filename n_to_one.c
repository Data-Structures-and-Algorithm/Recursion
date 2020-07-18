#include<stdio.h>
#include<stdlib.h>

void print(int n);

int main() 
{

	print(10);
	
	return 0;
}


void print(int n)
{
	if (n == 0) {
		return;
	} 
	
	printf("%d\n", n);

	print(n - 1);
}

