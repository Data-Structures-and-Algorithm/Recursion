#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char src, char temp, char dest);

int main() {

	int n;

	printf("Enter no.of disks: ");	

	scanf("%d", &n);

	hanoi(n, 'A', 'B', 'C');

	return 0;
}


void hanoi(int n, char src, char temp, char dest)
{
	if (n == 1) {
		printf("Move Disk %d from %c --> %c\n", n, src, dest);
		return;
	}

	hanoi(n - 1, src, dest, temp);
	printf("Move Disk %d from %c --> %c\n", n, src, dest);
	hanoi(n - 1, temp, src, dest);
}
