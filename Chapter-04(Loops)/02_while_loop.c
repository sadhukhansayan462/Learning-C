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



==================================================
*/




#include  <stdio.h>

int main(){

int a = 1;

while(a<=10)
{
   printf("%d\n",a);
   a = a + 1;
}

    return 0;
}