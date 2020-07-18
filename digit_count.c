#include<stdio.h>
#include<stdlib.h>

int digit_count(int n);

int main(int argc, char *argv[]) 
{

	printf("Count = %d\n", digit_count(atoi(argv[1])));
	
	return 0;
}


int digit_count(int n)
{
	if (n == 0) {
		return 0;
	} 

	return 1 + digit_count(n / 10);
}

