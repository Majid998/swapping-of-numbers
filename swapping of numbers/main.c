/* Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.
Author Majid Mujahid Hussain Dated 6 December 2020*/
#include <stdio.h>
#include <stdlib.h>
    /*Their are many ways to actually do this program
    1. using a temporary variable
    2. using Addition and Subtraction.
    3. using multiplication and division */
int main()
{
    int C = 0, D = 0, temporary = 0;
    printf("Hello world!\n");
    printf("Please enter the number to be stored in location C: \n ");
    scanf("%d", &C);
    printf("Please enter the number to be stored in location D: \n ");
    scanf("%d", &D);

    //swapping the numbers in memory location using temporary variable.

   // temporary = C;
    //printf("\n The variable in Temporary variable is %d", temporary);// to be kept commented used only to check the proper working of the program.
    //C = D;
    //printf(" \n The variable in C variable is %d", C);
    //D = temporary;
    //printf("\n The variable in D variable is %d", D);

    //swapping without using temporary variable.
    //swapping of variables using addition and subtraction.

    //example c = 12 and d = 90
    //C = C + D;//now c = 102 has combined value of c and d
    //printf(" \n The variable in C variable is %d", C);// to be kept commented used only to check the proper working of the program.
    //D = C - D;//now D = 102 - 90 = 12
    //printf(" \n The variable in D variable is %d", D);
    //C = C - D;//now C = 102 - 12 = 90
    //printf(" \n The variable in C variable is %d", C);

    //swapping of numbers in variables using Multiplication and Division.
    C = C * D; // c = 12 * 90 = 1080
    printf(" \n The variable in C variable is %d", C);
    D = C / D; //d = 1080 / 90 = 12
    printf(" \n The variable in D variable is %d", D);
    C = C /D ; // c = 1080 / 12 = 90
    printf(" \n The variable in C variable is %d", C);
    return 0;
}
