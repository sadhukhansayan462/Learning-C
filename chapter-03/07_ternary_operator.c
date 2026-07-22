/*
=========================================
       CHAPTER 3 : TERNARY OPERATOR
=========================================

Definition:

Ternary Operator is the short form
of if-else.

@@ Syntax:

condition
? expression1
: expression2;

Meaning:

If condition is TRUE
execute expression1.

Else
execute expression2.

Use:

Small decisions only.

=========================================
*/

#include <stdio.h>

int main(){

    int age ;

printf("Enter your age : ");
scanf("%d",&age);

age>=18 ? printf("Adult.") : printf("Minor.");


    return 0;
}