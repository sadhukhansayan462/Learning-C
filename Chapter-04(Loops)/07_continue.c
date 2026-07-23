/*
=============================================
CONTINUE STATEMENT
=============================================

Definition:
continue skips the remaining statements
of the current iteration and moves to
the next iteration.

Works with:
1. while
2. do...while
3. for

Difference:

break    -> exits the loop completely.

continue -> skips only the current iteration.

=============================================
*/

#include <stdio.h>

int main(){

int count=1;

while (count<=5)
{
    printf("%d\n",count);
    count++;
    
        if(count==3)
        {
            continue;
        }
    
        if(count==5)
        {
            break;
        }
printf("Next\n");

}


    return 0;
}