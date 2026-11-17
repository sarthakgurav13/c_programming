#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Pattern
//          Input         : Integer number of elements
//          Output        : Display alphabets in ascending order
//          Description   : Display the specified number of uppercase
//                          alphabets starting from A.
//          Date          : 17/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i = 0;
    char iCnt ='A';

    for(i = 0; i < iNo; i++)
    {
        printf("%c\t",iCnt++);

    }
    printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;


    printf("Enter Number of Element : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input          Output
//--------------------------------------------------------------------------------
//      5              A B C D E
//      10             A B C D E F G H I J
//      3              A B C
//      1              A
//--------------------------------------------------------------------------------