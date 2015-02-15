Quiz 02
=======  

Question 01
-----------  
What's the size of variable 'marks' in the following declaration?  
int marks[2][3][5][2];  

### Answer  
240 bytes  

### Explanation  
size = 2 * 5 * 3 * 2 * 4(for storing single integer) = 240  

Question 02
-----------  
What's the output of this C code?  

`#include <stdio.h>`  
`int main() {`   
`int ary[2][3];`  
`ary[][] = {{1, 2, 3}, {4, 5, 6}};`  
`printf("%d\n", ary[1][0]);`  
`}`  

### Answer  
Compile Time Error  