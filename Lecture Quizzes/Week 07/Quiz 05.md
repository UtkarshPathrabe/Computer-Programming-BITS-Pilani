Quiz  
====  

Question 01  
-----------  
Comment on the following pointer declaration.  
`int *ptr, p;`  

### Answer  
ptr is a pointer to integer, p is not.  

Question 02  
-----------  
What's the output of this code?   

```  
#include <stdio.h>   
int x = 0;   

void main() {  
int *ptr = &x;  
printf("%p\n", ptr);   
x++;   
printf("%p\n ", ptr);   
}  
```  

### Answer  
Same Address  