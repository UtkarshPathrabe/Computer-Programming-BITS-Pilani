Quiz 03
=======  

Question 01
-----------  
Which of the following statements are correct about an array? Choose all the correct options.  

### Answer  
* The array int num[26] can store 26 elements.  
* The declaration num[SIZE] is allowed if SIZE is a macro (i.e. following statement is included before main(): #define SIZE 10).   

Question 02
-----------  
What does the following program give?   
```  
int main() {   
float arr[] = {12.4, 2.3, 4.5, 6.7,2.9};   
printf("%d\n", sizeof(arr)/sizeof(arr[0]));   
return 0;   
}  
```  

### Answer  
Number of elements in the array.  

Question 03
-----------  
What should be the condition inside the loop to print the diagonal elements of a 3x3 matrix in the following C program fragment? Assume a[3][3] is filled with required number of elements.  
```  
int a[3][3];  
int i, j;  
for(i = 0; i < 3; i++) {  
for(j = 0; j < 3; j++)  
if(------)  
printf("%d\n", a[i][j]);  
}  
}  
```  

### Answer  
i == j  

Question 04
-----------  
What statement should be included in the blank (------) provided so that the program computes the sum of individual columns of the matrix and stores in the 'sum' array?  
```  
int main() {  
int a[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};  
int sum[3]={0}, r, c;  
for ( r=0; r<3; r++)  
for ( c=0; c<3;c++)  
------  
}  
```  

### Answer  
sum[c] += a[r][c];  

Question 05
-----------  
Consider the following C program to display the sum of array elements. Choose a correct option from the following to replace the missing statement (----). Assume arr[5] is filled with required number of elements.  
```  
int main() {  
int arr[5];  
int i, sum=0;  
for (i = 0; i < 5; )  
------  
printf("%d",sum);  
return 0;  
}  
```  

### Answer  
sum = sum + arr[i++];  

Question 06
-----------  
All the array elements of an array (whether one-dimensional or multi-dimensional) should be of the same type. TRUE or FALSE.  

### Answer  
TRUE  

Question 07
-----------  
The desired output of the following C program is  
`f n o i`  
Which of the following is correct if-condition to get the desired output.  
```  
int main() {  
char c[4][4] = {{'h','a','e','f'}, {'z','p','n','w'}, {'n','o','m','g'}, {'i','j', 'v', 'd'}};  
int i, j;  
for(i = 0; i < 4; i++)  
for(j = 4-1; j >= 0; j--)  
if(---------)  
printf("%c",c[i][j]);   
}  
```  

### Answer  
(i + j) == 3  

Question 08
-----------  
The desired output of the following program is: `hfnos`   
Which of the following should be replaced in place of LINE? 
```  
int main() {  
char c[] = {'h', 'e', 'l', 'l', 'o'};  
int i;  
for(i = 0; i < 5; i++)  
LINE  
for(i = 0; i < 5; i++)  
printf(" %c",c[i]);  
}  
```  

### Answer  
c[i] = c[i] + i;  