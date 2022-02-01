#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(void)
{
    int number1 = get_int("First number please: "); //asking user for first number//
    int number2 = get_int("Second number please: "); //asking user for send numbaer//
    int calculator = number1 + number2;  // adding numbers, put answer into variable"calculator"//
    
    printf("%i \n" , calculator); //displaying answer within variable "calculator"//
}





//Running://
//- ls to find file//
//- cd to correct folder//
//- make "name of file"//
//- ./"name of file"//

//printing://
// printf("%i" , variable name); //
// for new line - ("%i \n", variable name); //

//int is a data type, stands for integer//
//only state data type once, not needed in printing //

//errors://
//implicit decleration of function-typo//
//always make before run//
//save befpre make//
