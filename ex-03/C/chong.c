//
//  ex03.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    // Exercise 03
    char quote[256], name[256];
    int len;

    printf("What is the quote? ");
    fgets(quote, 255, stdin);
    len = strlen(quote);
    if (quote[len-1] == '\n') quote[len-1] = '\0';
    fpurge(stdin);

    printf("Who said it? ");
    fgets(name, 255, stdin);
    len = strlen(name);
    if (name[len-1] == '\n') name[len-1] = '\0';
    fpurge(stdin);

    printf("%s says, \"%s.\"\n", name, quote);

    return 0;
}
