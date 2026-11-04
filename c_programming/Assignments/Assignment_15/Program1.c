#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main ()
{
   char Name[30];

   printf("Please enter full name : ");
   scanf("*%*[^'\n']s",Name);

   printf("Your name is %s \n",Name);
   return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////
//      Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1                         Output                              
//--------------------------------------------------------------------------------  
//      Sarthak Gurav                   Your name is Sarthak Gurav
//      Rahul Patil                     Your name is Rahul Patil
//      Amit                            Your name is Amit
//////////////////////////////////////////////////////////////////////////////////