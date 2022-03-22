#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(void)
{

 char *X = "jon"; ///char is datatype, X is the label, jon is the value///

 printf("%s\n" , X);

 printf("%p\n" , &X); //Address of X//

 printf("%p\n" , X); //value at X//

 printf("%c\n" , *X); //Pointer variable pointing to first char location//
 
 printf("%p\n" , &*X); 
 
}





//Running://
//- ls to find file//
//- cd to correct folder//
//- make "name of file"//
//- ./"name of file"//

//printing://
//integers:  printf("%i" , variable name); //
//pointers:  printf("%p" , &variable name);//
// for new line - ("%i \n", variable name); //

//int is a data type, stands for integer//
//only state data type once, not needed in printing //

//errors://
//implicit decleration of function-typo//
//always make before run//
//save befpre make//
// number to left of error show line and character of mistake//
