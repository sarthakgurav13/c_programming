#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//      
//          Function Name : CheckNumber
//          Input         : Integer
//          Output        : string
//          Description   : Checks if the number is positive, negative, or zero
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////

void CheckNumber( int iNo)
{

    if(iNo < 0)
    {
        printf("Negative Number\n");
    }
    else if (iNo == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Positive Number\n");
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

CheckNumber(iValue);

return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//          -5           Negative Number
//          5            Positive Number
//          0            Zero
//////////////////////////////////////////////////////////////////////////////////