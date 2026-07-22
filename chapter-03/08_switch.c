/*
=========================================
        CHAPTER 3 : SWITCH
=========================================

Used when there are many choices.

Syntax:

switch(expression)
{
    case value:
        statements;
        break;

    default:
        statements;
}

break:
Stops execution and comes outside.

default:
Executes if no case matches.

=========================================
*/

#include <stdio.h>

int main(){

int colour;

printf("Enter a number (1-5) : ");
scanf("%d",&colour);

switch(colour)
{
  case 1:
     printf("Red");
  break;

  case 2:
    printf("Yellow");
  break;

  case 3:
    printf("Green");
  break;

  case 4:
    printf("Blue");
  break;

  case 5:
    printf("White");
  break;

  default:
    printf("Invalid number.");
}

    return 0;
}





