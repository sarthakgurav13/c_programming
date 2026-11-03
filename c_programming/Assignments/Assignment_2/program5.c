#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////
//      
//          Funtion  Name : CheckEven  
//          Input :         Integer , Integer
//          Output :        Integer
//          Description :   check Even odd 
//          Date :          19/10/2026
//          Author :        Sarthak Babalu Gurav 
//
/////////////////////////////////////////////////////////////////////////////////

BOOL CheckEven (int iNo)
{
    if((iNo % 2) ==0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a Number \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    
    if(bRet == FALSE)
    {
    printf("The Number is odd  ");
    }
    else
    {
        printf("The number is Even ");
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1          Output
//--------------------------------------------------------------------------------
//          15           The number is odd              
//         -10           The number is Even    
//         -15           The number is odd          
//          10           The number is Even         
//////////////////////////////////////////////////////////////////////////////////