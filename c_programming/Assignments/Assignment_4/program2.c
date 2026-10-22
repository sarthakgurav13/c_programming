#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : CheckEvenOdd
//          Input         : Integer
//          Output        : string
//          Description   : Checks if the number is even or odd
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd( int iNo)
{
   

    if(iNo % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{

int iValue = 0;

printf("Enter a number \n");
scanf("%d",&iValue);

CheckEvenOdd(iValue);

return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//         -5            Odd Number
//          6            Even Number
//          5            Odd Number
//          0            Even Number
//         -6            Even Number
//////////////////////////////////////////////////////////////////////////////////