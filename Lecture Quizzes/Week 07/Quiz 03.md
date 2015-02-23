Quiz
====  

Question 01  
-----------  
Variables inside function parentheses have ________ level access.  

### Answer  
Local  

Question 02  
-----------  
What's the output of this code:  

```  
#include <stdio.h>  
int x = 5;  
  
void main() {  
int x = 3;   
m();  
printf("%d", x);  
}  

void m() {   
x = 8;   
n();   
}  

void n() {  
printf("%d", x);   
}  
```  

### Answer  
83  