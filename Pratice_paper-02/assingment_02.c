#include <stdio.h>

int main(){

//variable declaration

int accountNumber;
int age;
float currentBalance;
float withdrawalAmount;
float depositAmount;
float balanceAfterDeposit;
float finalBalance;
float balanceAfterOneYear;
float annualInterest;

//user input

printf("Enter your account number  :");
scanf("%d",&accountNumber);

printf("Enter your age             :");
scanf("%d",&age);

printf("Enter your current balance :");
scanf("%f",&currentBalance);

printf("Enter your deposited amount:");
scanf("%f",&depositAmount);

printf("Enter your withdrawal amount:");
scanf("%f",&withdrawalAmount);

printf("\n================================================\n");
printf("            BANK ACCOUNT SUMMARY              \n");
printf("================================================\n\n");

printf("Account Number   :%d\n",accountNumber);
printf("Age              :%d\n",age);
printf("Current Balance  :%.2f\n",currentBalance);
printf("Deposit Amount   :%.2f\n",depositAmount);
printf("Withdrawal Amount:%.2f\n",withdrawalAmount);

printf("\n----------------------------------------------\n\n");

//calculation
balanceAfterDeposit = currentBalance + depositAmount;
finalBalance = balanceAfterDeposit - withdrawalAmount;
annualInterest= finalBalance * 4 / 100;
balanceAfterOneYear = finalBalance+annualInterest;

printf("Balance After Deposit :%.2f\n",balanceAfterDeposit);
printf("Final Balance         :%.2f\n",finalBalance);
printf("Interest(4%%)         :%.2f\n",annualInterest);
printf("Balance After 1 Year  :%.2f\n",balanceAfterOneYear);

printf("\n================================================");


return 0;
}