/*
                  GOLDEN RULE  
 
1. Parentheses?
   ✔ Solve them first.

2. Multiplication, Division, Modulus?
   ✔ Solve them next (Left to Right if there are multiple).

3. Addition and Subtraction?
   ✔ Solve them last (Left to Right).

   */

 #include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Example of operator precedence and associativity
    result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result of a + b * c: %d\n", result); // Output: 20

    result = (a + b) * c; // Parentheses change the order of operations
    printf("Result of (a + b) * c: %d\n", result); // Output: 30
      
    result = a - b - c; // Left to Right associativity for subtraction
    printf("Result of a - b - c: %d\n", result); // Output: 3

    result = a / b * c; // Left to Right associativity for division
    printf("Result of a / b * c: %d\n", result); // Output: 4

    result =a + b * a - c / b; // Multiplication and division have higher precedence than addition and subtraction
    printf("Result of a + b * a - c / b: %d\n", result); // Output: 14

    return 0;
}