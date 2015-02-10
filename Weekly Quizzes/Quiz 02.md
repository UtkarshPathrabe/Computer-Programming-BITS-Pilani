Quiz 02
=======  

Question 01
-----------  
In the following program fragment, it is desired that while loop should terminate once user entered the datavalue as 0. If user enter datavalue less than 0, it should loop again without executing statements corresponding to "step 2 of the processing". What should be replaced for LINE-1 and LINE-2 to achieve this?  
int datavalue;  
while (1 == 1)  
{  
printf ("Type in datavalue");  
scanf ("%d",&datavalue);  
if (datavalue == 0)  
LINE-1  
if (datavalue < 0)  
LINE-2  
step 2 of processing  
}  

### Answer
LINE-1: break;  
LINE-2: continue;  

Question 02
-----------  
Consider the following C program. It will give some compile time error(s) because the statements are not terminated with semicolons. Which line(s) of the program should be terminated with semicolon to get the output as i=10. Choose the correct set of option(s).  
![alt text](https://github.com/UtkarshPathrabe/Computer-Programming-BITS-Pilani/blob/master/Weekly%20Quizzes/Quiz0202.png "Mask")  

### Answer  
* Line Number 3  
* Line Number 5  

Question 03
-----------  
 Consider the following program fragment. It is intended to print the phrase "In the Loop" twice. What should be replaced in place of VAL so that the intended output gets printed? Choose all the correct options.  
void main()  
{  
int a = 6, b = 12;  
while (a < b)  
{  
printf ("In the Loop");   
a += 2;   
b -= VAL;   
}  
}  

### Answer  
* 1
* 2
* 3

Question 04
-----------  
Consider the following four program fragments i.e. A, B, C, and D. Which program(s) fragment (i.e. B, C, D) functionality is similar to A? Choose correct choice.   
![alt text](https://github.com/UtkarshPathrabe/Computer-Programming-BITS-Pilani/blob/master/Weekly%20Quizzes/Quiz0204.png "Mask")   

### Answer  
B  

Question 05
-----------  
Consider the following piece of code. What is printed by the printf statement written on line X?  
int i;   
for(i=0; i<10; i++)   
{   
/* some code that doesn't modify i */   
}   
printf ("%d",i); /* line X */   

### Answer  
10  

Question 06
-----------  
Consider the following program fragment. How many times "ONE" will be printed?  
int i;  
for (i = 0; i ; i++)  
{  
printf ("ONE");   
}  

### Answer  
Zero Times  

Question 07
-----------  
Consider the following programs: Program A and Program B. It is claimed that the functionality of both the programs is same. Choose the best option for this claim.  
![alt text](https://github.com/UtkarshPathrabe/Computer-Programming-BITS-Pilani/blob/master/Weekly%20Quizzes/Quiz0207.png "Mask")   

### Answer  
The claim is right.  

Question 08
-----------  
See the following program. You can see that variable i is not initialized. With what value i should be initialized so that PILANI gets printed.   
int main()   
{   
int i;   
if (i);   
else   
printf("PILANI");   
return 0;   
}  

### Answer  
i = 0  