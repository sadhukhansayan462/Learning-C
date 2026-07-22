/*
==================================================
            CHAPTER 3 : IF-ELSE
==================================================

Definition

The if-else statement is used when we want the
program to execute one block if the condition is
TRUE and another block if the condition is FALSE.

--------------------------------------------------

Syntax

if(condition)
{
    // Executes if condition is TRUE
}
else
{
    // Executes if condition is FALSE
}

--------------------------------------------------

Working

Condition
    ↓
TRUE ? ---------- FALSE ?
    │                  │
Execute IF       Execute ELSE
    │                  │
    └────────┬─────────┘
             ↓
         Continue Program

--------------------------------------------------

Remember

1. Only ONE block executes.

2. else never has a condition.

3. if-else is used when both outcomes
   are important.

==================================================
*/

#include <stdio.h>
int main(){

int age;

printf("==========================================\n");
printf("      CHECKING THE ELIGIBILITY TO VOTE     \n");
printf("==========================================\n");

printf("Enter your age :");
scanf("%d",&age);

printf("_________________________\n\n");

if(age>=18)
{
    printf("You are eligible to vote.\n");
}
else
{
    printf("You are not eligible to vote.\n");
}
printf("\n==========================================\n");
printf("                 THANK YOU                 \n");
printf("==========================================");

return 0; 
}