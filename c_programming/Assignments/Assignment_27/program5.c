#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : Reverse
//          Input         : Character pointer (string)
//          Output        : Displays the given string in reverse order.
//          Description   : It calculates the length of the given string and
//                          displays its characters in reverse order using
//                          pointer arithmetic.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iCnt = 0;

    while( *str != '\0')
    {
        iCnt++;
        str++;
    }

    for(int i = iCnt - 1; i>=0; i--)
    {
        printf("%c",str[-(iCnt - i)]);
    }

}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Entre  string:\n");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                   Output
//--------------------------------------------------------------------------------
//      Hello                   olleH
//      Sarthak                 kahtraS
//      ABC                     CBA
//      Computer                retupmoC
//      12345                   54321
//      A B C                   C B A
//////////////////////////////////////////////////////////////////////////////////