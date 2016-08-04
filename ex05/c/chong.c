//
//  ex05.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    // Exercise 05
    char num1[16], num2[16];
    int number1, number2;
    int len;

    printf("What is the first number? ");
    fgets(num1, 16, stdin);
    len = strlen(num1);
    if (num1[len-1] == '\n') num1[len-1] = '\0';

    printf("What is the second number? ");
    fgets(num2, 16, stdin);
    len = strlen(num2);
    if (num2[len-1] == '\n') num2[len-1] = '\0';

    number1 = atoi(num1); number2 = atoi(num2);

    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n",
           number1, number2, number1+number2, number1, number2, number1-number2,
           number1, number2, number1*number2, number1, number2, number1/number2);

    return 0;
}
