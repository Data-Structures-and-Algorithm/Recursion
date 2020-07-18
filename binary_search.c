#include<stdio.h>
#include<stdlib.h>

		
int binary_search(int arr[], int num, int start, int end);

int main(int argc, char *argv[]) {

	int pos;

	int arr[] = {-10, 0, 3, 4, 5, 20};

	pos = binary_search(arr, atoi(argv[1]), 0, 5);

	if (pos == -1) {
		printf("Not found\n");
	} else {
		printf("Found at %d\n", pos);
	}	
	return 0;
}


int binary_search(int arr[], int num, int start, int end)
{
	if (start > end) {
		return -1;
	}
	
	int mid = (start + end) / 2;

	if (arr[mid] == num) {
		return mid;
	} else if (num < arr[mid]) {
		return binary_search(arr, num, start, mid - 1);
	} else {
		return binary_search(arr, num, mid + 1, end);
	}

}









