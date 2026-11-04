#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : ChkEqual
//          Input         : Two Integer Numbers
//          Output        : Boolean
//          Description   : Checks whether two numbers are equal or not
//          Date          : 04/11/2026
//          Author        : Sarthak Babalu Gurav
//
/////////////////////////////////////////////////////////////////////////////////
BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet == 1)
    {
        printf("Equal numbers  \n");
    }
    else 
    {
        printf ("Not equal numbers\n");
    }

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Input 2         Output
//--------------------------------------------------------------------------------
//      10                  10              Equal numbers
//      10                  20              Not equal numbers
//      -5                  -5              Equal numbers
//      0                   0               Equal numbers
//      100                 50              Not equal numbers
//////////////////////////////////////////////////////////////////////////////////