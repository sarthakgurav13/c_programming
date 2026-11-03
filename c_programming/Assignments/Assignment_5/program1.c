#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : FindGreatest            
//          Input         : Integer ,Integer ,Integer 
//          Output        : Integer
//          Description   : Check Greatest 
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst , int iSecound , int iThird)
{
    if((iFirst >= iSecound) && (iFirst >= iThird))
    {
       printf("%d is Greatest " ,iFirst); 
    }
    else if((iSecound >= iThird)&& (iSecound >= iFirst))
    {
        printf("%d is Greatest " ,iSecound);
    }
    else 
    {
        printf("%d is Greatest " ,iThird);
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
    int iValue3 = 0;

    

    printf("Enter the Number  : \n");
    scanf("%d%d%d", &iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested Test Cases
//--------------------------------------------------------------------------------
//      Input 1         Input 2         Input 3         Output
//--------------------------------------------------------------------------------
//      10              20              30              30 is Greatest
//      50              20              30              50 is Greatest
//      10              60              30              60 is Greatest
//      10              10              5               10 is Greatest
//      5               10              10              10 is Greatest
//      10              5               10              10 is Greatest
//      10              10              10              10 is Greatest
//      -10             -20             -5              -5 is Greatest
//      -10             0               5               5 is Greatest
//      -5              -10             -20             -5 is Greatest
/////////////////////////////////////////////////////////////////////////////////