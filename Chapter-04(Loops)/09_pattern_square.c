/*
=========================================
PATTERN PRINTING - SQUARE
=========================================

Golden Questions:

1. How many rows?
   -> Outer Loop

2. What should happen inside each row?
   -> Inner Loop

Pattern:

*****
*****
*****
*****
*****

Outer Loop
-> Runs 5 times (5 rows)

Inner Loop
-> Prints 5 stars in each row

printf("\n")
-> Moves to the next row

=========================================
*/

#include <stdio.h>

int main(){

 for(int a=1;a<=5;a++)
{
    for(int b=1;b<=5;b++)
    {
    printf("*",b);
    }
    
printf("\n");
}

    return 0;
}