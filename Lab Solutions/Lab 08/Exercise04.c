#include <stdio.h>
#include <stdlib.h>

float* insert (float *arr, int *size, float ele) {
	int i, j;
	float *arr1 = (float *)malloc((*size + 1) * sizeof(float));
	for (i = 0, j = 0; i < *size; ) {
		if (arr[i] < ele) {
			arr1[j++] = arr[i++];
		} else {
			break;
		}
	}
	arr1[j++] = ele;
	for (;i < *size;) {
		arr1[j++] = arr[i++];
	}
	*size = *size + 1;
	return arr1;
}

int binarySearch (float *arr, int size, float ele) {
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

float* delete (float *arr, int *size, float ele) {
	int i, index = binarySearch (arr, *size, ele);
	if (index != -1) {
		float *arr1 = (float *)malloc((*size - 1) * sizeof(float));
		for (i = 0; i < index; i++) {
			arr1[i] = arr[i];
		}
		for (i = index + 1; i < *size; i++) {
			arr1[i - 1] = arr[i];
		}
		printf ("%f Deleted.\n", ele);
		*size = *size - 1;
		return arr1;
	} else {
		printf ("Given number %f doesn't exist in the array.\n", ele);
		return arr;
	}
}

void printArray (float *arr, int size) {
	int i;
	printf ("The Contents of array are:\n");
	for (i = 0; i < size; i++) {
		printf ("%f\t", *(arr + i));
	}
	printf ("\n");
}

int priceLessThan150 (float *arr, int size) {
	int i, count = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] >= 150) {
			break;
		}
		count += 1;
	}
	return count;
}

int priceMoreThan1550 (float *arr, int size) {
	int i, count = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] <= 1550) {
			continue;
		}
		count += 1;
	}
	return count;
}

int main (void) {
	int n, size = 0, i;
	float ele;
	printf ("Enter the size of the array:\t");
	scanf ("%d", &n);
	float *array;
	for (i = 0; i < n; i++) {
		printf ("Enter the %d element:\t", i+1);
		scanf ("%f", &ele);
		array = insert (array, &size, ele);
	}
	printArray (array, size);
	printf ("Which element you want to delete:\t");
	scanf ("%f", &ele);
	array = delete (array, &size, ele);
	printArray (array, size);
	printf ("Number of elements less than 150 are:\t%d.\n", priceLessThan150(array, size));
	printf ("Number of elements more than 1550 are:\t%d.\n", priceMoreThan1550(array, size));
	return 0;
}
