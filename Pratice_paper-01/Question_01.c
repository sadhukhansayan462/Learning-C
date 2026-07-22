/* practice sheet A - 01
1. Write a C program to calculate area of a rectangle:
   a. Using hard coded inputs.
   b. Using inputs supplied by the user.



*/

#include<stdio.h>

int main() {

    int length, breath;

    printf("enter the length of the rectangle:");
    scanf("%d", &length);

    printf("enter the breath of the rectangle:");
    scanf("%d", &breath);

    printf("the area of the rectangle is %d sq. units", length * breath);

    return 0;
}