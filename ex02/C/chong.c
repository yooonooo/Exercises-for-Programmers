//
//  ex02.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    // Exercise 02
    char string[100];

    printf("What is the input string? ");
    scanf("%s", string);

    printf("%s has %d characters.\n", string, (int) strlen(string));

    return 0;
}
