Quiz 07
=======  

Question 01  
-----------  
What is the size of *ptr in a 32-bit machine, (assuming initialization as int *ptr = 10;)?  

### Answer  
4 bytes  

### Explanation  
Size of pointer is 4 bytes.  

Question 02  
-----------  
Consider these declarations and select the operations that would not throw an error (Tick all that apply)   

```  
int a = 5;   
float b = 10;   
char ch = 'k';   
int *x;   
float *y;   
char *z;   
x = &a; y = &b; z = &c;   
```  

### Answer  
* x++  
* y + 8  
* x <= y  

### Explanation  
Addition, Multiplication, Subtraction and Division among Pointers is not allowed. Addition and Subtraction with a constant is allowed.  