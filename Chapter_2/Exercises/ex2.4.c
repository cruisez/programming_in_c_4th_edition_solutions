/*Write a program that subtracts the value 15 from 87 and displays the result,
together with an appropriate message, at the terminal.*/

#include <stdio.h>

int main(void)
{
    int value1, value2, sub;

    sub = 87 - 15;
    printf("The result of 87 - 15 is %i\n", sub);

    return 0;
}