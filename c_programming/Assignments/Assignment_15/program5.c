#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Percentage
//          Input         : Integer (Total Marks and Obtained Marks)
//          Output        : Float (Percentage)
//          Description   : Calculates and returns the percentage of obtained marks
//          Date          : 05/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
float Percentage(int totalMarks, int ObtMarks)
{
    float Percent = 0.0f;

    Percent = (((float) ObtMarks /(float) totalMarks ) * 100.0);

    return Percent;

}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main ()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : ");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%.f%%\n",fRet);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Input 2         Output
//--------------------------------------------------------------------------------
//      500                 450             90%
//      600                 480             80%
//      700                 525             75%
//      100                 35              35%
//      100                 0               0%
//      50                  75              150%
//      0                   0               Undefined (division by zero)
//
//////////////////////////////////////////////////////////////////////////////////