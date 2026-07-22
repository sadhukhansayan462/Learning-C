
#include <stdio.h>

int main(){


// Variable declaration 

int age;
int rollNumber;
float attendance;
float mathematicsMarks;
float physicsMarks;
float chemistryMarks;
float totalMarks;
float averageMarks;
float marksPercentage;
float currentSemFees;
float scholarshipAmount;
float remainingFee;
float gst;
float finalFee;
int yesOrNo;
int requiredInformation;


// User input

printf("\n\nEnter Your Roll Number           : ");
scanf("%d",&rollNumber );

printf("Enter Your Age                   : ");
scanf("%d",&age);

printf("Enter Your Attendance Percentage : ");
scanf("%f",&attendance);

printf("Enter Your Marks in Mathematics  : ");
scanf("%f",&mathematicsMarks);

printf("Enter Your Marks in Physics      : ");
scanf("%f",&physicsMarks);

printf("Enter Your marks in Chemistry    : ");
scanf("%f",&chemistryMarks);

printf("Enter Your Current Semster fess  : ");
scanf("%f",&currentSemFees);

printf("Enter the Scholarship Amount     : ");
scanf("%f",&scholarshipAmount);

printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
printf("|  If Yes -> Enter-1 | If No -> Enter-2 |\n");
printf("|_ _ _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ _|\n\n");
printf("Hostel required ?                             : ");
scanf("%d",&yesOrNo);

printf("  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
printf("| ENTER             TO               |\n");
printf("|------------------------------------|\n");
printf("|   1  ->  Print Full Report.        |\n");
printf("|   2  ->  Print Marks Report.       |\n");
printf("|   3  ->  Print Fee Report.         |\n");
printf("|   4  ->  Print Eligibility Report. |\n");
printf("| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n\n");

printf("Enter the required Option From Above Box     : ");
scanf("%d",&requiredInformation);



// Calculations

totalMarks = mathematicsMarks + physicsMarks + chemistryMarks ;
averageMarks = totalMarks / 3 ;
marksPercentage = totalMarks / 300 * 100 ;

remainingFee = currentSemFees - scholarshipAmount ;
gst = 0.18 * remainingFee ;
finalFee = remainingFee + gst ;




// Output


printf("\n\n=================================================\n");
printf("            STUDENT MANAGEMENT SYSTEM            \n");
printf("=================================================\n\n");

switch (requiredInformation)
{
case 1:
    
printf("Roll Number    : %d\n",rollNumber);
printf("Age            : %d\n\n",age);


printf("----------------- Marks Report ------------------\n\n");

printf("Mathematics    : %.2f\n",mathematicsMarks);
printf("Physics        : %.2f\n",physicsMarks);
printf("Chemistry      : %.2f\n\n",chemistryMarks);

printf("Total Marks    : %.2f\n",totalMarks);
printf("Average        : %.2f\n",averageMarks);
printf("Percentage     : %.2f %%\n",marksPercentage);
printf("Grade          : ");

if(marksPercentage>=90)
{
      printf("A\n\n");
}
   else if(marksPercentage>=75)
{
      printf("B\n\n");
}
   else if(marksPercentage>=60)
{
      printf("C\n\n");
}
   else if(marksPercentage>=40)
{
      printf("D\n\n");
}
else
{
    printf("E (Fail)\n\n");
}

printf("------------------ Fees Report ------------------\n\n");

printf("Semster Fee         : Rs. %.2f\n",currentSemFees);
printf("Scholarship Amount  : Rs. %.2f\n",scholarshipAmount);
printf("Ramaining Fee       : Rs. %.2f\n",remainingFee);
printf("GST (18%%)           : Rs. %.2f\n",gst);
printf("Final Fee           : Rs. %.2f\n",finalFee);
printf("Hostel Fees         : Rs.");

if (yesOrNo == 1)
{
    printf(" %.2f\n",30000.00);
}
else if (yesOrNo == 2)
{
    printf(" 0.00\n");
}
else
{
    printf("Invalid Choice\n");
}

printf("\n-------------- Eligibility Report ---------------\n\n");

printf("Scholarship Status : ");

if(marksPercentage >= 85)
{
    if (attendance >= 80)
    {
        if(age >= 17)
        {
            printf("Eligible.\n");
        }
        else
        {
           printf("Not Eligible.\n");
        }
    }
    else
    {
       printf("Not Eligible.\n");
    }
}
else
{
     printf("Not Eligible.\n");
}


printf("Placement Status   : ");

if(age>=18)
{
    if (attendance >= 75)
    {
        if(marksPercentage >= 60)
        {
            printf("Eligible.\n");
        }
        else
        {
           printf("Not Eligible.\n");
        }
    }
    else
    {
       printf("Not Eligible.\n");
    }
}
else
{
     printf("Not Eligible.\n");
}

break;

case 2:

printf("----------------- Marks Report ------------------\n\n");

printf("Mathematics    : %.2f\n",mathematicsMarks);
printf("Physics        : %.2f\n",physicsMarks);
printf("Chemistry      : %.2f\n\n",chemistryMarks);

printf("Total Marks    : %.2f\n",totalMarks);
printf("Average        : %.2f\n",averageMarks);
printf("Percentage     : %.2f %%\n",marksPercentage);
printf("Grade          : ");

if(marksPercentage>=90)
{
      printf("A\n\n");
}
   else if(marksPercentage>=75)
{
      printf("B\n\n");
}
   else if(marksPercentage>=60)
{
      printf("C\n\n");
}
   else if(marksPercentage>=40)
{
      printf("D\n\n");
}
else
{
    printf("E (Fail)\n\n");
}

break;

case 3:

printf("------------------ Fees Report ------------------\n\n");

printf("Semester Fee         : Rs. %.2f\n",currentSemFees);
printf("Scholarship Amount  : Rs. %.2f\n",scholarshipAmount);
printf("Remaining Fee       : Rs. %.2f\n",remainingFee);
printf("GST (18%%)           : Rs. %.2f\n",gst);
printf("Final Fee           : Rs. %.2f\n",finalFee);
printf("Hostel Fees         : Rs.");

if (yesOrNo == 1)
{
    printf(" %.2f\n",30000.00);
}
else if (yesOrNo == 2)
{
    printf(" 0.00\n");
}
else
{
    printf("Invalid Choice\n");
}
break;

case 4:


printf("\n-------------- Eligibility Report ---------------\n\n");

printf("Scholarship Status : ");

if(marksPercentage >= 85)
{
    if (attendance >= 80)
    {
        if(age >= 17)
        {
            printf("Eligible.\n");
        }
        else
        {
           printf("Not Eligible.\n");
        }
    }
    else
    {
       printf("Not Eligible.\n");
    }
}
else
{
     printf("Not Eligible.\n");
}


printf("Placement Status   : ");

if(age>=18)
{
    if (attendance >= 75)
    {
        if(marksPercentage >= 60)
        {
            printf("Eligible.\n");
        }
        else
        {
           printf("Not Eligible.\n");
        }
    }
    else
    {
       printf("Not Eligible.\n");
    }
}
else
{
     printf("Not Eligible.\n");
}
break;

default:

    printf("Invalid Option.\n");

}


printf("\n=================================================\n");
printf("                      THANK YOU                  \n");
printf("=================================================\n\n");


    return 0;
}