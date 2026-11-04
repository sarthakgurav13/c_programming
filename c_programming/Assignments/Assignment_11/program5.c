#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : RangeDisplayRev
//          Input         : Integer Starting number and Ending number
//          Output        : Display numbers in reverse order
//          Description   : Display all integers in the specified range in reverse order
//          Date          : 03/11/2026
//          Author        : Sarthak Babalu Gurav  
//////////////////////////////////////////////////////////////////////////////////
int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        return -1; 
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting number: ");
    scanf("%d", &iValue1);

    printf("Enter Ending number: ");
    scanf("%d", &iValue2);

    iRet = RangeDisplayRev(iValue1, iValue2);


    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1     Input 2                Output
//--------------------------------------------------------------------------------	
//           10	        20		            90
//            5	        15		            50
//            2	         8          		20
//            3	         7		            10
//           -5	         7		             6
//           20	        10		             —
///////////////////////////////////////////////////////////////////////////////////