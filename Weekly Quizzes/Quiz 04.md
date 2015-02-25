Quiz 04
=======  

Question 01
-----------  
Consider the following part of code.  

`printf("Area of square of length %d is %d",r, a=area(r));`  

Choose the correct option(s) for the function definition of area().   

### Answer  
```  
int area(int s){  
  int a = s*s;  
  return a;  
}  
```  
```  
int area(int r){  
  return r*r;  
}  
```  

Question 02
-----------  
Consider the following C program.  
```  
int func(int r, int a, int c){  
  a = r+r;  
  printf("%d", a++ - c--);  
  return a;  
}    
  
int main() {  
  const int i = 10;  
  func(10, i, 5);  
  return 0;  
}  
```  

### Answer  
No error. Output displayed by the program is 15.  

Question 03
-----------  
What value should be assigned to variable var such that output displayed by the following program is 11.  
```  
int main(void) {  
  int *p, var;  
  p = &var;  
  printf("%d", (*p)++);  
  return 0;  
}  
```  

### Answer  
11  

Question 04
-----------  
Which pair of the statements should be replaced with -------, such that the following program prints the maximum value from a, b and c?  
```  
int func(int z, int y) {  
  if(z>y) return z;  
  else return y;  
}  
  
int main(void) {  
  int a, b, c, max, max1;  
  -------  
  printf("%d", max);  
  return 0;  
}  
```  

### Answer  
* max=func(a,b); max=func(max,c);  
* max1=func(a,b); max=func(max1,c);  

Question 05  
-----------  
What will be the output of the following program for x=2 and y=4.  
```  
int func(int x, int y) {  
  x = x-y++;  
  return x;  
}  

int main(void) {  
  int x, y;  
  printf(" %d,", func(x,y));  
  printf("%d", y);  
  return 0;  
}  
```  

### Answer  
-2, 4  

Question 06  
-----------  
Which of the following is/are correct with respect to the following C program.  
```  
int main(void) {  
  float *p, *q;  
  float y;  
  p = &y;  
  q = &y;  
  *p = *p + 1;  
  q = q + 1;  
  return 0;  
}  
```  

### Answer  
+ *p = *p + 1, increments value of y by one.  
+ Pointer q is no more pointing to y after q = q + 1.  

Question 07
-----------  
Which of the following is correct with respect to the following program.  
```  
void exchange (char a, int x) {  
  x = a;  
  printf("%c", x);  
}   

int main(void) {  
  exchange('A', 10);  
  return 0;  
}   
```  

### Answer  
It displays output as A.  

Question 08
-----------  
Consider the following program to print the sum of square of numbers from 1 to 10.  
```  
int squaresum (int x) {  
  int sum = 0;  
  sum = sum + x * x;  
  return sum;  
}

int main (void) {  
  int i, sum = 0;  
  for(i = 1; i < 11; i++)  
  ---------------  
  printf("%d", sum);  
  return 0;  
}  
```  
Which of the following is a correct replacement to the missing statement ------ to get the desired output?   

### Answer  
`sum = sum + squaresum(i);`  