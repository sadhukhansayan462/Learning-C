/*

          Assignment 1: Student Report Card System

 Objective

Create a program that asks the user for:

Student Name (skip this for now if you haven't learned strings)
Roll Number
Marks in Mathematics
Marks in Physics
Marks in Chemistry

Then calculate and display:

✅ Total Marks

✅ Average Marks

✅ Percentage

*/
#include <stdio.h>

   int main(){
   
   int Roll;
   float Mathematics,Physics,Chemistry,Total_marks;

    
printf("To calculate your marks fill the following details :\n\n ");

printf("Enter your Roll number :");
scanf("%d",&Roll);

printf("Enter the marks obtained in Mathematics:");
scanf("%f",&Mathematics);

printf("Enter the marks obtained in Physics:");
scanf("%f",&Physics);

printf("Enter the marks obtained in Chemistry:");
scanf("%f",&Chemistry);

Total_marks = Mathematics+Physics+Chemistry;

printf("Total marks obtained:%.2f\n",Total_marks);
printf("The Average is :%.2f\n",(Total_marks)/3);
printf("Total percentage Obatained:%.2f percent",(Total_marks/300)*100);


    return 0;
}  

/* PERFECT VERSION OF THE CODE


#include <stdio.h>

int main()
{
    // Variable Declaration
    int rollNumber;
    float mathematics, physics, chemistry;
    float totalMarks, averageMarks, percentage;

    // Heading
    printf("=========================================\n");
    printf("         STUDENT REPORT SYSTEM\n");
    printf("=========================================\n\n");

    // Taking Input
    printf("Enter Roll Number : ");
    scanf("%d", &rollNumber);

    printf("Enter Mathematics Marks : ");
    scanf("%f", &mathematics);

    printf("Enter Physics Marks : ");
    scanf("%f", &physics);

    printf("Enter Chemistry Marks : ");
    scanf("%f", &chemistry);

    // Calculations
    totalMarks = mathematics + physics + chemistry;
    averageMarks = totalMarks / 3;
    percentage = (totalMarks / 300) * 100;

    // Displaying Result
    printf("\n=========================================\n");
    printf("            STUDENT REPORT\n");
    printf("=========================================\n");

    printf("Roll Number         : %d\n", rollNumber);
    printf("Mathematics Marks   : %.2f\n", mathematics);
    printf("Physics Marks       : %.2f\n", physics);
    printf("Chemistry Marks     : %.2f\n", chemistry);

    printf("-----------------------------------------\n");

    printf("Total Marks         : %.2f\n", totalMarks);
    printf("Average Marks       : %.2f\n", averageMarks);
    printf("Percentage          : %.2f%%\n", percentage);

    printf("=========================================\n");

    return 0;
}

*/