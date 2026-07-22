/*


🎯 Ticket Price Rules
Age	Ticket Price
Less than 5	    ₹0 (Free)
5 - 17	        ₹120
18 - 59	        ₹200
60 and above	₹100

====================================================
             MOVIE TICKET BOOKING SYSTEM
====================================================

Age                : 22
Number of Tickets  : 3

----------------------------------------------------

Ticket Price       : ₹200.00
Total Amount       : ₹600.00

Booking Status     : Confirmed

====================================================
                 THANK YOU
====================================================


if(age>=60)
{
    printf("Rs. 100.00");
}
else if(age>=18)
{
    printf("Rs. 200.00");
}
else if(age>=5)
{
    printf("Rs. 120.00");
}
else
{
    printf("Rs. 00.00");
}

*/

#include <stdio.h>

int main(){


int age;
int numberOfTickets;

float ticketPrice;
float totalPrice;

//user input 
printf("\nEnter your age            :");
scanf("%d",&age);

printf("Enter the number of tickets :");
scanf("%d",&numberOfTickets);

//dicision making 

if(age>=60)
{
    ticketPrice=100;
}
else if(age>=18)
{
    ticketPrice=200;
}
else if(age>=5)
{
    ticketPrice=120;
}
else
{
    ticketPrice=0;
}

//calculation

totalPrice=numberOfTickets*ticketPrice;

//output

printf("\n==========================================\n");
printf("        MOVIE TICKET BOOKING SYSTEM        \n");
printf("==========================================\n\n");
        
printf("Age              : %d\n",age);
printf("Number Of Ticket : %d\n\n",numberOfTickets);

printf("------------------------------------------\n\n");

printf("Ticket Price   : Rs. %.2f",ticketPrice);


printf("\nTotal Amount   : Rs. %.2f",totalPrice);



printf("\nBooking Status : ");

if(numberOfTickets>=1)
{
    printf("Confirmed.");
}
else
{
    printf("Invalid Number of Tickets");
}

printf("\n\n==========================================\n");
printf("                THANK YOU                  \n");
printf("==========================================\n");


    return 0;
}







