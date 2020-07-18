#include<stdio.h>
#include<stdlib.h>

void convert(int n, int base);

int main(int argc, char *argv[]) 
{

	int num = atoi(argv[1]);
	
	int base = atoi(argv[2]);
 

	convert(num, base);

	printf("\n");
	
	return 0;
}


void convert(int n, int base)
{
	if (n == 0) {
		return;
	} 

	convert(n / base, base);

	if (n % base < 10) {
		printf("%d", n % base);
	} else {
		printf("%c", (n % base) - 10 + 'A');
	}
}

