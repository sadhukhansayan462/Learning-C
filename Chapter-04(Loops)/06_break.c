/*
==================================================
            CHAPTER 4 : BREAK STATEMENT
==================================================

Definition:

The break statement immediately terminates
the nearest loop or switch statement.

Syntax:

break;

Works with:

1. while
2. do...while
3. for
4. switch

Important:

• The loop stops immediately.
• Statements after break inside the loop
  are not executed.
• Program execution continues after
  the loop.

==================================================
*/

#include <stdio.h>

int main(){

int pass;

while(1)
{
    printf("Enter Passward :");
    scanf("%d",&pass);

    if(pass==6294)
    {
        break;
    }

    printf("Wrong Passward,Try again.\n");
}

printf("Permission Granted.");


    return 0;
}