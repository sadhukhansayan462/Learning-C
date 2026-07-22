/*
==================================================
          CHAPTER 3 : NESTED IF
==================================================

Definition

Nested if means

An if statement inside another if statement.

--------------------------------------------------

Syntax

if(condition1)
{
    if(condition2)
    {
        // Code
    }
}

--------------------------------------------------

Working

Question 1

↓

If TRUE

↓

Question 2

↓

If TRUE

↓

Execute Code

--------------------------------------------------

Use Nested if when

The second condition should only be checked
if the first condition is TRUE.

==================================================
*/
    
#include <stdio.h>
int main(){

int age;
int attendance;
int marksPercentage;

//user input

printf("\nEnter your age                      :");
scanf("%d",&age);

printf("Enter your Attendance in percentage :");
scanf("%d",&attendance);

printf("Enter your marks in percentage      :");
scanf("%d",&marksPercentage);

//output
printf("\n============================================\n");
printf("     CHECKING ELIGIBILITY FOR PLACEMENT      \n");
printf("============================================\n\n");
if(age>=18)
{
  if(attendance>=75)
  {
    if(marksPercentage>=60)
    {
        printf("You are Eligible for Placement.");
    }
     else
{
    printf("You are Not Eligible for Placement.");
}  
  }
  else
{
    printf("You are Not Eligible for Placement.");
}
}
else
{
    printf("You are Not Eligible for Placement.");
}


printf("\n\n============================================\n");
printf("                 THANK YOU                   \n");
printf("============================================\n");

    return 0;
}