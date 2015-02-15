Quiz 03
=======  

Question 01
-----------  
What will be the output of the following search program?  

`#include <stdio.h>`  

`int main() {`   
`int array[6] = {1, 2, 3, 2, 1, 2};`  
`int index = -1, search, index, c, n;`  
`search = 2;`  
`n = 6;`  
`for (c = 0; c < n; c++) {`  
`if (array[c] == search) { /* if required element found */`  
`index = c;`   
`}`  
`}`  
`printf("%d", index);`   
`return 0;`   
`}`  

### Answer  
5  