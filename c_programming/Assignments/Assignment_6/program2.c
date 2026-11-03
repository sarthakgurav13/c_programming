#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : CalCulateBonus        
//          Input         : Integer 
//          Output        : Integer
//          Description   : Calculate the Bonus amount
//          Date          : 22/10/2026
//          Author        : Sarthak Babalu Gurav    
//////////////////////////////////////////////////////////////////////////////////

void CheckAdmision(float fMarks , int iAge)
{
    if(((fMarks >= 0 )&&(fMarks <= 100 ))&&(iAge >= 0))
    {
        if((fMarks >= 60)&&(iAge >= 17))
        {
            printf("Eligible for admission \n ");
        }
        else
        {
            printf(" Not Eligible  \n ");
        }
    }
    else
    {
        printf("Negative Age  or Marks outside 0 -100  is not valid\n");
    }
}   
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fMarks = 0;
    int iAge = 0;

    printf("Enter Marks  : \n");
    scanf("%f", &fMarks);

    printf("Enter Age  : \n");
    scanf("%d", &iAge);

    CheckAdmision(fMarks, iAge);

    return EXIT_SUCCESS;
}


