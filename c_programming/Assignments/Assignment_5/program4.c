#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckMultipleDivisiblity        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Check if the number is divisible by 5 and 3
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisiblity(int iNo)
{
    if((iNo % 5 == 0) && (iNo % 3 == 0))
    {
       printf("%d is Divisible by both 5 and 3 \n", iNo); 
    }
    else if((iNo % 5 != 0) && (iNo % 3 != 0))
    {
        printf("%d is Not Divisible by 5 and 3 \n", iNo);
    }
    else if((iNo % 5 == 0) && (iNo % 3 != 0))
    {
        printf("%d is Divisible by 5 only \n", iNo);
    }
    else if((iNo % 5 != 0) && (iNo % 3 == 0))
    {
        printf("%d is Divisible by 3 only \n", iNo);
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

    CheckMultipleDivisiblity(iValue1);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested Test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//      15              15 is Divisible by both 5 and 3
//      30              30 is Divisible by both 5 and 3
//      10              10 is Divisible by 5 only
//      25              25 is Divisible by 5 only
//      9               9 is Divisible by 3 only
//      21              21 is Divisible by 3 only
//      7               7 is Not Divisible by 5 and 3
//      11              11 is Not Divisible by 5 and 3
//      1               1 is Not Divisible by 5 and 3
//      0               0 is Divisible by both 5 and 3
//      -15             -15 is Divisible by both 5 and 3
//      -30             -30 is Divisible by both 5 and 3
//      -10             -10 is Divisible by 5 only
//      -25             -25 is Divisible by 5 only
//      -9              -9 is Divisible by 3 only
//      -21             -21 is Divisible by 3 only
//      -7              -7 is Not Divisible by 5 and 3
/////////////////////////////////////////////////////////////////////////////////
