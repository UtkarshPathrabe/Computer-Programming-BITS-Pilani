Quiz 08
=======  

Question 01  
-----------  
Comment about the output of the following program?  

```  
#include <stdio.h>   
int main() {   
int a[3] = {1, 2, 3};   
int *p = a;   
printf("%p\t%p", p, a);   
return 0;   
}   
```  

### Answer  
Same address is printed.  

Question 02
-----------  
What's the output?  

```  
#include <stdio.h>   
int main() {   
const int ary[4] = {1, 2, 3, 4};   
int *p;   
p = ary + 3;   
*p = 5;   
printf("%d\n", ary[3]);   
}   
```  

### Answer  
5  