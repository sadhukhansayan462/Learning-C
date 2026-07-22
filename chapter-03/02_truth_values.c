/*
==========================================================
            CHAPTER 3 : TRUTH VALUES IN C
==========================================================

Truth Values are used in Decision Making.

In C,

True  = 1
False = 0

----------------------------------------------------------

RULES

1. Every Relational Operator returns either
      1 (True)
   or 0 (False)

Examples

5 > 3      -> 1

10 < 5     -> 0

7 == 7     -> 1

9 != 9     -> 0

----------------------------------------------------------

NON-ZERO RULE

0               -> False

Any Non-Zero Number
(1, 2, 10, -5, 100, -999)

                -> True

----------------------------------------------------------

Remember

Relational Expression
          ↓
Returns 1 or 0
          ↓
Used by if statement
          ↓
Decision is made

==========================================================
*/

#include <stdio.h>

int main()
{
    printf("========== TRUTH VALUES ==========\n\n");

    printf("5 > 3      = %d\n", 5 > 3);
    printf("10 < 5     = %d\n", 10 < 5);
    printf("7 == 7     = %d\n", 7 == 7);
    printf("9 != 9     = %d\n", 9 != 9);
    printf("20 >= 20   = %d\n", 20 >= 20);
    printf("15 <= 10   = %d\n", 15 <= 10);

    printf("\n==================================\n");

    return 0;
}