/*
    practice sheet A - 3
    
3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
#include<stdio.h>
int main(){

    float celcius;

printf("Enter temperature in centigrade degree :");
scanf("%f",&celcius);

printf("the temperature in fahrenheit is: %f F",(celcius*9/5)+32);

return 0;
}