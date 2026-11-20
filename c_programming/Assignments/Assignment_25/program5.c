#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DisplayScedule
//          Input         : Character
//          Output        : Displays the examination schedule according to the division.
//          Description   : It accepts a division character and displays the corresponding
//                          examination time. If the division is invalid, it displays
//                          "No Schedule".
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void DisplayScedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("No Schedule");
    }


}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the Division:\n");
    scanf(" %c", &cValue);

    DisplayScedule(cValue);


    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input       Output
//--------------------------------------------------------------------------------
//      A           Your exam at 7 AM
//      B           Your exam at 8.30 AM
//      C           Your exam at 9.20 AM
//      D           Your exam at 10.30 AM
//      a           Your exam at 7 AM
//      d           Your exam at 10.30 AM
//      E           No Schedule
//////////////////////////////////////////////////////////////////////////////////