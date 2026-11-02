#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//          Function Name : MultipleDisplay        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Print multiples of a given number up to 5 times that number
//          Date          : 2/11/2026           
//          Author        : Sarthak Babalu Gurav
////////////////////////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= iNo * 5; iCnt++)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                      Output
//--------------------------------------------------------------------------------
//     5                           5       10      15      20      25
//     2                           2       4       6       8       10
/////////////////////////////////////////////////////////////////////////////