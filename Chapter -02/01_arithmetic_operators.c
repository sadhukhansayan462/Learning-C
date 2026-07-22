/*
=================================================
ARITHMETIC OPERATORS IN C
=================================================

1. +  Addition
2. -  Subtraction
3. *  Multiplication
4. /  Division
5. %  Modulus (Remainder) 
*/

#include<stdio.h>
int main(){

float a,b,c;
a=3;
b= 6;
c=5;
int q, r;
q=9;
r=5;

printf("the sum of a, b and c is :%f\n", b+c+a);

printf("substracting c from a gives:%f\n",a-c);

printf("The multiplication of b and c is :%f\n", b*c);

printf("Dividing a by b gives :%f\n",a/b);

printf("Dividing q by r gives a remainder of :%d\n",q%r);

return 0; 
}


/* % operator works only with integers */
