#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//          Function Name : Mult
//          Input         : Three Integer Numbers
//          Output        : Integer
//          Description   : Returns the multiplication of three numbers.
//                          If any one number is zero, it multiplies the other
//                          two numbers.
//          Date          : 04/11/2026
//          Author        : Sarthak Babalu Gurav  
/////////////////////////////////////////////////////////////////////////////////
int Mult(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 == 0)
    {
        return iNo2*iNo3;
    }
    else if (iNo2 == 0)
    {
        return iNo1*iNo3;
    }
    else if (iNo3 == 0)
    {
        return iNo1*iNo2;
    }
    else 
    {
        return iNo1*iNo2*iNo3;
    }

}

/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main ()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    printf("Enter number : ");
    scanf("%d",&iValue3);

    iRet = Mult(iValue1,iValue2,iValue3);

    printf("%d\n",iRet);


    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1             Input 2         Input 3         Output
//--------------------------------------------------------------------------------  
//      10                  20              30              6000
//      0                   10              20              200
//      10                  0               20              200
//      10                  20              0               200
//      0                   0               20              0
//      -2                  3               4               -24
//////////////////////////////////////////////////////////////////////////////////