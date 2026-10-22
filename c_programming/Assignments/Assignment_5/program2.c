#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckLeapYear            
//          Input         : Integer 
//          Output        : Integer
//          Description   : Check if a year is a leap year or not
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{
    if(iNo < 0)
    {
        printf("%d Enter a valid year \n", iNo);
        return;
    }
    if(((iNo % 4 == 0)&&(iNo % 100 != 0))||(iNo % 400 == 0 ))
    {
       printf("%d its a leap year  \n", iNo); 
    }
    else
    {
        printf("%d not a leap year  \n", iNo);
    }
    
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    

    printf("Enter the Number  : \n");
    scanf("%d", &iValue1);

    CheckLeapYear(iValue1);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested Test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//      2024            2024 its a leap year
//      2023            2023 not a leap year
//      1900            1900 not a leap year
//      2000            2000 its a leap year
//      2028            2028 its a leap year
//      2100            2100 not a leap year
//      2400            2400 its a leap year
/////////////////////////////////////////////////////////////////////////////////