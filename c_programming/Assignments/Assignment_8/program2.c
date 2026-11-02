#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Display        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Print a number in words if it is between 0 and 9, otherwise print "Invalid Number"
//          Date          : 2/11/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }
    else if(iNo == 6)
    {
        printf("Six\n");
    }
    else if(iNo == 7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9)
    {
        printf("Nine\n");
    }
    else if (iNo == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Invalid Number\n");
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output                              
//--------------------------------------------------------------------------------  
//     5                           One
//     2                           Two
//     0                           Zero
//     10                          Invalid Number
////////////////////////////////////////////////////////////////////////////////