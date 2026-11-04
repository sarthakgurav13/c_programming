#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//          Function Name : ChkGreater
//          Input         : Integer
//          Output        : Boolean
//          Description   : Check whether the given number is greater than 100
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main ()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if (bRet == 1)
    {
        printf("Greater \n");
    }
    else 
    {
        printf ("Smaller\n");
    }

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Output                              
//--------------------------------------------------------------------------------  
//      150                 Greater
//      101                 Greater
//      100                 Smaller
//      50                  Smaller
//      -10                 Smaller
//////////////////////////////////////////////////////////////////////////////////