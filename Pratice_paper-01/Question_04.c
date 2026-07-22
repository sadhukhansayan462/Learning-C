/*
      practice sheet A -04


4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.

*/

#include <stdio.h>
int main(){
 
      int principal,years;
      float rate,simple_interest;

      printf("Enter the principal amount :");
      scanf("%d",&principal);

      printf("Enter the nuumber of year :");
      scanf("%d",&years);

      printf("Enter the rate percentage :");
      scanf("%f", &rate);

      simple_interest= (principal*years*rate)/100 ;
 
      printf("\n\nThe simple interest is : %f Rupees",simple_interest);

return 0;

}


