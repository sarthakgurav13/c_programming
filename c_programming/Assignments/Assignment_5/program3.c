#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : DisplayGrade        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Check Grade of the student based on marks 
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(int iNo)
{
    if((iNo >= 0)&& (iNo <=100))
    {

        if((iNo <= 100 )&&(iNo >= 90))
        {
        printf(" Grade A \n");
        }
        else if ((iNo < 90 )&&(iNo >= 75 ))
        {
        printf(" Grade B \n");
        }
        else if ((iNo < 75 )&&(iNo >= 60 ))
        {
            printf(" Grade C \n");
        }
        else if ((iNo < 60 )&&(iNo >= 40 ))
        {
            printf(" Grade D \n");
        }
        else if ((iNo < 40 )&&(iNo >= 0 ))
        {
            printf(" Fails \n");
        }
    }
    else 
    {
        printf("Invalid marks ");
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
    

    printf("Enter the Marks  : \n");
    scanf("%d", &iValue1);

    DisplayGrade(iValue1);

    return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested Test Cases
//--------------------------------------------------------------------------------
//      Input           Output
//--------------------------------------------------------------------------------
//      95              Grade A
//      90              Grade A
//      89              Grade B
//      75              Grade B
//      74              Grade C
//      60              Grade C
//      59              Grade D
//      40              Grade D
//      39              Fails
//      0               Fails
//      100             Grade A
//      -1              Invalid marks
//      101             Invalid marks
/////////////////////////////////////////////////////////////////////////////////
