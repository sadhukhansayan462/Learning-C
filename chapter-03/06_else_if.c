/*
==================================================
            CHAPTER 3 : ELSE IF
==================================================

Definition

The else-if ladder is used when there are
multiple conditions, but only one should execute.

--------------------------------------------------

Syntax

if(condition1)
{
}
else if(condition2)
{
}
else if(condition3)
{
}
else
{
}

--------------------------------------------------

Working

Check Condition 1

↓

True?

↓

Execute

↓

STOP

False?

↓

Check Condition 2

↓

Repeat

↓

If none are true

↓

Execute else

--------------------------------------------------

Remember

1. Only ONE block executes.

2. Order is very important.

3. Check from highest priority
   to lowest priority.

==================================================
*/

#include <stdio.h>
int main(){

float marks;

printf("Enter your average marks :");
scanf("%f",&marks);

printf("\n=======================================\n");
printf("            GRADE DECLARATION            \n");
printf("=======================================\n");
       
printf("Average Marks : %.2f\n",marks);

printf("---------------------------------------\n");

printf("Remark        : ");

if(marks>=90)
{
    printf("Grade-A");
}
else if(marks>=75)
{
    printf("Grade-B");
}
else if(marks>=50)
{
    printf("Grade-C");
}
else
{
    printf("Fail");
}
printf("\n=======================================\n");
printf("               THANK YOU                 \n");
printf("=======================================\n");


    return 0;
}