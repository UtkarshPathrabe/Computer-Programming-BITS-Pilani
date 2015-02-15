Quiz  
====   

Question
--------  
In this implementation of insertionSort(), what should be added at the blanked position?  

`/* Function to sort an array using insertion sort*/`   
`void insertionSort(int arr[], int n) {`   
`int i, key, j;`  
`for (i = 1; i < n; i++) {`   
`key = arr[i];`   
`j = i-1;`  
`/* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */`   
`while (j >= 0 && arr[j] > key) {`  
`_________________ /* -- Fill this blank-----*/`  
`j = j-1;`   
`}`  
`arr[j+1] = key;`   
`}`   
`}`   

### Answer  
`arr[j+1] = arr[j];`  