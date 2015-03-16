Quiz
====   

Question
--------  
Write a C function name modify() which modifies all the elements of an integer array (taken through stdin) to their squares. Function arguments should be the array and the size of the array.  

#### Answer  
```  
#include <stdio.h>

/*** Complete the function below ***/

void modify(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        a[i] = a[i] * a[i];
    }
}

/*** Function ends here ***/

int main()
{

  /* Don't change this code */

	int n, i; //Size of array
    scanf("%d", &n);
    int *arr = (int*)malloc(n*sizeof(int));	//arr is the integer pointer (or array of integers)

	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);

	/* Don't change this code */

	
    /*** Call your function here ***/

	modify(arr, n);

	/*** Call your function here ***/
	
	/* Don't change this code */
	
	for(i=0; i<n; i++)
		printf("%d ", arr[i])
	
	/* Don't change this code */
	
	
}
           
```  