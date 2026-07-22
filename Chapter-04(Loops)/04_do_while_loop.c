/*
==================================================
        CHAPTER 4 : DO WHILE LOOP
==================================================

Definition:

A do...while loop executes the statements first
and checks the condition afterwards.

Syntax:

do
{
    statements;
}
while(condition);

Important Points:

1. Executes at least one time.

2. Condition is checked after execution.

3. Semicolon after while(condition) is compulsory.

Difference:

while:
Condition -> Execute

do...while:
Execute -> Condition

==================================================
*/ 

#include <stdio.h>

int main(){


int i =1;

do
{
    printf("%d\n",i);
    i++;
}
 while (0);


    return 0;
}