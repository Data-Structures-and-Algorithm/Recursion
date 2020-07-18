#include<stdio.h>
#include<stdlib.h>

void print(int n);

int main() 
{

	print(13);
	
	return 0;
}


void print(int n)
{
	if (n == 0) {
		return;
	} 

	print(n - 1);

	printf("%d\n", n);
}

