#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CheckTriangle        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Check if the sides form a valid triangle
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if ((iSide1 + iSide2 > iSide3) && (iSide2 + iSide3 > iSide1) && (iSide3 + iSide1 > iSide2))
    {
        printf("The sides form a valid triangle.\n");
    }
    else
    {
        printf("The sides do not form a valid triangle.\n");
    }
}

   
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSide  = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter the three sides of the triangle  : \n");
    scanf("%d %d %d", &iSide, &iSide2, &iSide3);

    // Call the function to calculate discount
    CheckTriangle(iSide, iSide2, iSide3);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1         Input 2         Input 3         Output                              
//--------------------------------------------------------------------------------  
//      3               4               5               The sides form a valid triangle.
//      1               2               3               The sides do not form a valid triangle
//      0               0               0               The sides do not form a valid triangl
//      0               5               7               The sides do not form a valid triangle
////////////////////////////////////////////////////////////////////////////////


