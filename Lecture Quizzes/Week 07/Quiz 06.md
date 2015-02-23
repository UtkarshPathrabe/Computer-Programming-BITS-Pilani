Quiz 06
=======  

Question 01
-----------  
What's the output of this code?  

```  
#include <stdio.h>   

int operate (int x, int y) {   
x++;   
y++;   
printf("%d %d ", x, y);   
}   
  
int main() {   
int x=5, y=2;   
operate(x,y);   
printf("%d %d", x, y);   
return 0;   
}   
```  

### Answer  
6 3 5 2  

Question 02
-----------  
Which of these functions would successfully swap the two passed numbers?  

### Answer  
```
void swap(int *a, int *b) {    
int temp = *a;   
*a = *b;   
*b = temp;   
}  
```  