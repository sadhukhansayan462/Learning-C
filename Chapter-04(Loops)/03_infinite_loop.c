/*
==================================================
        CHAPTER 4 : INFINITE LOOP
==================================================

Definition:

An infinite loop is a loop that never stops
because its condition always remains true.

Common Reasons:

1. Forgot to update the variable.

2. Updated the variable in the wrong direction.

3. Used an always true condition.

Example:

while(1)
{
    printf("Hello");
}

This loop never ends.

To avoid infinite loops:

✓ Initialize correctly.

✓ Write the correct condition.

✓ Always update the variable properly.

Execution Flow:

Initialization
      ↓
Condition
      ↓
Statements
      ↓
Update
      ↓
Condition Again

If the condition never becomes false,
the loop runs forever.

==================================================
*/

/*
==================================================
CHAPTER 4 : WHILE LOOP
==================================================

Syntax:

while(condition)
{
    statements;
}

A while loop has three parts:

1. Initialization
2. Condition
3. Update


press ctrl + c to stop the execution of an infinite loop.
==================================================
*/




#include  <stdio.h>

int main(){

int a = 1;

while(1)
{
   printf("%d\n",a);
   a = a + 1;
}

    return 0;
}