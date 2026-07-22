/*to convert a data form any thing to anything 
    
   use (the required data type)variable 

   example;
           int a=2;

           to convert it to float

           (float)a

           now computer will store a as 1.0


*/

#include <stdio.h>


int main(){

int a =4;
int b =5;
float c =2.5;

printf("the sum of all this numbers is %f\n",a+b+c);
printf ("the sum of all this numbers is %d",a+b+(int)c);
return 0;

}