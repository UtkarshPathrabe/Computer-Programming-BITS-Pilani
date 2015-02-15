Quiz 01
=======  

Question 01
-----------  
See the given program. If the user enters 'n' the loop should terminate. Which of the following loop condition will satisfy this ?  

`int main() {`  
`float rate, pay;`   
`int hours, count = 0;`   
`char ch = 'y';`   
`while ( _________ ) {`  
`printf ("Hours: ");`  
`scanf ("%d",&hours);`  
`printf ("Rate: ");`  
`scanf ("%f",&rate);`   
`pay = hours * rate;`  
`printf ("Pay is Rupees %f\n", pay);`   
`printf ("Enter n if you want to exit");`   
`scanf (" %c",&ch);`  
`printf ("%c\n",ch);`  
`}`  
`}`  

### Answer  
ch != 'n'  

Question 02
-----------  
What will be the output corresponding to the last printf statement in the following program.  

`int main() {`  
`float rate, pay;`   
`int hours, count = 7;`   
`while (count >= 0) {`  
`printf ("Hour#38;s: ");`   
`scanf ("%d",&hours);`  
`printf ("Rate: ");`  
`scanf ("%f",&rate);`  
`pay = hours * rate;`  
`printf ("Pay is Rupees %f\n",pay);`   
`count--;`  
`}`  
`printf ("count = %d",count);`  
`}`  

### Answer  
count = -1  

Question 03
-----------  
How many times GOOD will be printed by the following program.  

`int main() {`   
`int count=0, var;`   
`while (count < 2) {`  
`var=0;`  
`while (var < 3) {`  
`printf ("GOOD");`  
`var++;`  
`}`  
`count++;`  
`}`  
`}`  

### Answer  
6 times  