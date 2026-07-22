/*

Mini Project: Student Scholarship Checker

Take the following inputs:

Roll Number
Age
Attendance (%)
Marks (%)


Rules

If:

Attendance ≥ 75%
AND
Marks ≥ 85%

then print:

Scholarship Approved

Otherwise print:

Scholarship Not Approved

*/
#include <stdio.h>

int main(){

int age;
int rollNumber;
float attendance;
float marks;

printf("\nEnter your Roll Number           :");
scanf("%d",&rollNumber);

printf("Enter your age                   :");
scanf("%d",&age);

printf("Enter your attendance percentage :");
scanf("%f",&attendance);
 
printf("Enter your marks percentage      :");
scanf("%f",&marks);

printf("\n============================================\n");
printf("          STUDENT SCHOLARSHIP REPORT          \n");
printf("============================================\n");
       
printf("Roll Number : %d\n",rollNumber);
printf("Age         : %d\n",age);
printf("Attendance  : %.2f%% \n",attendance);
printf("Marks       : %.2f%% \n",marks);
 
printf("--------------------------------------------\n");

printf("Result      :");

if(attendance >= 75 && marks >= 85)
{
    printf(" Scholarship Approved");
}
else
{
   printf(" Scholarship Not Approved");
}

printf("\n============================================\n");
printf("                 THANK YOU                 \n");
printf("============================================\n");

    return 0;
}



