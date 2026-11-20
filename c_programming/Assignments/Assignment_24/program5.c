#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Function Name : StrRevX
//          Input         : Character pointer (string)
//          Output        : Display the reverse of the given string
//          Description   : Calculate the length of the string and display
//                          its characters in reverse order.
//          Date          : 20/11/2026
//          Author        : Sarthak Babalu Gurav
/////////////////////////////////////////////////////////////////////////////////
void StrRevX(char *str)
{
    int icount = 0;
    while(str[icount] != '\0')
    {
      icount++;
    }

    for(int i =icount-1; i>= 0; i--)
    {
        printf("%c",str[i]);
    }

}

/////////////////////////////////////////////////////////////////////////////////
//          Entry Point Of the application
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^\n]s",arr);

    printf("reveres string is\n");
    StrRevX(arr);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input                  Output
//--------------------------------------------------------------------------------
//      Sarthak                k a h t r a S
//      hello                  o l l e h
//      programming            g n i m m a r g o r p
//      madam                  m a d a m
//--------------------------------------------------------------------------------