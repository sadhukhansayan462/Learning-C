/*
It should ask the user for:

Student Name (skip for now)
Roll Number
Age
Math Marks
Physics Marks
Chemistry Marks
Current Semester Fee
Scholarship Amount

Now calculate:

Total Marks
Average Marks
Percentage
Remaining Fee after Scholarship
GST (18%) on the Remaining Fee
Final Fee to Pay

*/
#include <stdio.h>

int main(){

//variable declaration

int rollNumber;
int age;
float mathsScore;
float chemistryScore;
float physicsScore;
float currentSemFees;
float scholarshipAmount;
float totalMarks;
float averageMarks;
float totalPercentage;
float remainingFeeAfterScholarship;
float GSTonTheRemainingFee;
float finalFeeToPay;

//user input 

printf ("Enter your roll number           :");
scanf("%d",&rollNumber);

printf("Enter your age                   :");
scanf("%d",&age);

printf("Enter maths marks                :");
scanf("%f",&mathsScore);

printf("Enter chemistry marks            :");
scanf("%f",&chemistryScore);

printf("Enter physics marks              :");
scanf("%f",&physicsScore);

printf("Enter your current semestar fees :");
scanf("%f",&currentSemFees);

printf("Enter the amount of scholarship  :");
scanf("%f",&scholarshipAmount);



//calculation

totalMarks = mathsScore + physicsScore + chemistryScore;
averageMarks = totalMarks / 3 ;
totalPercentage = totalMarks / 300 * 100 ;
remainingFeeAfterScholarship = currentSemFees - scholarshipAmount ;
GSTonTheRemainingFee = remainingFeeAfterScholarship * 18 / 100 ; 
finalFeeToPay = remainingFeeAfterScholarship + GSTonTheRemainingFee ;

//output 

printf("\n=====================================================\n");
printf("               COLLEGE STUDENT REPORT              \n");
printf("=====================================================\n\n");
        
printf("Roll Number       : %d\n",rollNumber);
printf("Age               : %d\n",age);
printf("Mathematics Marks : %.2f\n",mathsScore);
printf("Physics Marks     : %.2f\n",physicsScore);
printf("Chemistry Marks   : %.2f\n",chemistryScore);

printf("\n-----------------------------------------------------\n\n");

printf("Total Marks       : %.2f\n",totalMarks);
printf("Average Marks     : %.2f\n",averageMarks);
printf("Total Percentage  : %.2f\n",totalPercentage);

printf("\n-----------------------------------------------------\n\n");

printf("Semester Fees     : %.2f\n",currentSemFees);
printf("Scholarship Amount: %.2f\n",scholarshipAmount);
printf("Remaining Fee     : %.2f\n",remainingFeeAfterScholarship);
printf("GST (18%%)         : %.2f\n",GSTonTheRemainingFee);
printf("Final Fee         : %.2f\n",finalFeeToPay);

printf("\n=====================================================\n");
printf("                     THANK YOU                          \n");
printf("=====================================================\n\n");
    return 0;
}