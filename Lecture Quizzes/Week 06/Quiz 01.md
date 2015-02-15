Quiz 01
=======  

Question 01
-----------  
How much memory would be reserved for the variable 'days' declared below:  
float days[7];   

### Answer  
28 bytes  

### Explanation  
size = 7 * 4(for storing single integer) = 28  

Question 02
-----------  
Different ways to initialize an array with all elements as zero are:  
* `int array[5] = {};`  
* `int array[5] = {0};`  
* `int a = 0, b = 0, c = 0; int array[5] = {a, b, c};`  
* `All of the above`  

### Answer  
All of the above  

Question 03
-----------  
What's the output of the code given below:  

`#include <stdio.h>`  
`int main() {`   
`int ary[4] = {1, 2, 3, 4};`   
`int p[4];`  
`p = ary;`  
`printf("%d\n", p[1]);`  
`}`  

### Answer  
Compile Time Error  