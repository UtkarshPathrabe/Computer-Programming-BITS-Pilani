#include <stdio.h>

void bubbleSort (int arr[], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf ("BubbleSort Done!!!\n");
}

int binarySearch (int arr[], int size, int ele) {
	int low = 0, high = size - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] == ele) {
			return mid;
		} else if (arr[mid] > ele) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

void printArray (int arr[], int size) {
	int i;
	printf ("The Contents of array are:\n");
	for (i = 0; i < size; i++) {
		printf ("%d\t", arr[i]);
	}
	printf ("\n");
}

void readArray (int arr[], int size) {
	int i;
	printf ("Enter the %d integers:\t", size);
	for (i = 0; i < size; i++) {
		scanf ("%d", &arr[i]);
	}
}

int main (void) {
	int n, ele, index;
	printf ("Enter the size of the array:\t");
	scanf ("%d", &n);
	int array[n];
	readArray (array, n);
	printArray (array, n);
	bubbleSort (array, n);
	printArray (array, n);
	printf ("Enter the element you want to search in the array:\t");
	scanf ("%d", &ele);
	index = binarySearch (array, n, ele);
	if (index == -1) {
		printf ("Element not found in array.\n");
	} else {
		printf ("Element found at index %d in the array.\n", index);
	}
	return 0;
}
