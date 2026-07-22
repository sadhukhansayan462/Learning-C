/*
==================================================
        CHAPTER 3 : LOGICAL OPERATORS
==================================================

Logical Operators are used to combine or modify
conditions.

There are three logical operators in C.

--------------------------------------------------

1. Logical AND (&&)

Meaning:
Both conditions must be TRUE.

Example:
age >= 18 && marks >= 40

Result:

True  && True  -> True
True  && False -> False
False && True  -> False
False && False -> False

--------------------------------------------------

2. Logical OR (||)

Meaning:
At least one condition must be TRUE.

Example:
age >= 18 || parentPermission == 1

Result:

True  || True  -> True
True  || False -> True
False || True  -> True
False || False -> False

--------------------------------------------------

3. Logical NOT (!)

Meaning:
Reverses the answer.

!True  -> False

!False -> True

==================================================
*/

#include <stdio.h>

int main(){

  int age;
  float attendance,marks;

printf("Enter your age                   :");
scanf("%d",&age);

printf("Enter your marks in percent      :");
scanf("%f",&marks);

printf("Enter your attendance percentage :");
scanf("%f",&attendance);


printf("\n=================================================\n");
printf("              STUDENT ELIGIBILITY              \n");
printf("=================================================\n\n");

if(attendance >= 75 && marks >= 50 && age >= 17)
{
   printf("You are eligible to attend board exam. ,\n");
}

if(age >= 15 )
if(attendance >= 75|| marks >= 80)
{

    printf("You are eligible to participate in the exhibition.,\n");
}

if(!(age >= 15))
{
    printf("Sorry,you are below age limit.         \n");
}

printf("\n=================================================\n");
printf("            THANK YOU & HAVE A NICE DAY            \n");
printf("=================================================\n\n");


return 0 ;
}