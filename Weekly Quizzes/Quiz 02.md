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
