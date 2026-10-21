#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//      
//          Funtion  Name : Check 
//          Input :         Integer 
//          Output :        Integer
//          Description :   Check divible 5 or not 
//          Date :          19/10/2026
//          Author :        Sarthak Babalu Gurav 
//
/////////////////////////////////////////////////////////////////////////////////
BOOL Check(int iNo)
{
    if ((iNo % 5)==0)
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
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number ");
    scanf("%d",&iValue);

    bRet =  Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input               Output
//--------------------------------------------------------------------------------
//          5               Divisible by 5
//          8               Not Divible by 5
//          10              Divisible by 5
//////////////////////////////////////////////////////////////////////////////////