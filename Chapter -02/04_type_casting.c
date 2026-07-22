 /*TYPE CASTING

Definition:
Manual conversion of one data type into another.

↓

Done by the programmer.

↓

Also called Explicit Type Conversion.

↓

Temporary.

↓

Does NOT change the original variable.

↓

(float)a
Makes a temporary float copy.

↓

(int)3.99

↓

3

(Decimal part removed)

↓

Used when we want more control over calculations*

*/

#include <stdio.h>

int main(){
 
    int a =5;
    int b =2;
    char c='A';
    int d =65;
    printf("%d\n",a/b);
    printf("%f\n",(float)a/b);
    printf("%d\n",(int)c); // will learn later in details 
    printf("%c\n",(char)d);


    return 0;
}