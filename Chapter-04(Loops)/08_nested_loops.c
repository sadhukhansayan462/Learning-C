/*
=========================================
        NESTED LOOPS
=========================================

Definition:
A loop inside another loop.

Golden Rule:
For every ONE iteration of the outer loop,
the inner loop completes ALL of its iterations.

Outer Loop
→ Controls Rows

Inner Loop
→ Controls Columns

Applications:
1. Pattern Printing
2. Matrices
3. Games
4. Tables
5. Image Processing

=========================================
*/

#include <stdio.h>

int main(){

for(int a = 1; a <= 3; a++)
{
    printf("Row %d\n",a);

    for(int b = 1; b <= 5; b++)
    {
        printf("  Seat %d\n",b);
    }
    printf("\n");
}

printf("END");

    return 0;
}