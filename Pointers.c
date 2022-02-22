#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(void)
{
 int n = 5;

printf("%i \n" , n);

printf("%p" , &n);
}

int main(void)
{
 int n = 5;
 int *Jorge = &n; //pointer variable(*)//

printf("%p \n", Jorge); //Pointer variable storing the address of a value//
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
