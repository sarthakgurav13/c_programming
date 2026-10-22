#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FindGreater              
//          Input         : Integer ,Integer
//          Output        : Integer
//          Description   : Finds the greater of two numbers
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst ,int iSecound)
{
    if(iFirst > iSecound)
    {
        printf("%d is Greater\n", iFirst);
    }
    else
    {
        printf("%d is Greater\n", iSecound);
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
    int iValue2 = 0;

    printf("Enter the Number\n");
    scanf("%d %d", &iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1           Input 2                   Output
//--------------------------------------------------------------------------------
//         -5            -10                        -5 is greter
//          6            10                         10 is greter
//          5            0                          5 is greter
//          0            -5                         0 is grater
//         -6            21                        21 is grater
//////////////////////////////////////////////////////////////////////////////////