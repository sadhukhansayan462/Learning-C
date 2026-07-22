/*
==================================================
            CHAPTER 4 : FOR LOOP
==================================================

Definition:

A for loop is used when we know approximately
how many times we want to repeat something.

Syntax:

for(initialization; condition; update)
{
    statements;
}

Execution Order:

1. Initialization (runs once)
2. Condition
3. Statements
4. Update
5. Repeat from step 2

Advantages:

1. Cleaner than while loop.
2. Initialization, condition and update
   stay together.
3. Mostly used when the number of
   iterations is known.

==================================================
*/

#include <stdio.h>

int main()
{
    printf("Numbers from 1 to 5:\n");

    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("\nEven Numbers:\n");

    for(int i = 2; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    printf("\nReverse Counting:\n");

    for(int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}