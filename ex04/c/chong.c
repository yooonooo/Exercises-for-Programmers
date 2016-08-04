//
//  ex04.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    // Exercise 04
    char noun[256], verb[256], adjective[256], adverb[256];
    int len;

    printf("Enter a noun: ");
    fgets(noun, 255, stdin);
    len = strlen(noun);
    if (noun[len-1] == '\n') noun[len-1] = '\0';

    printf("Enter a verb: ");
    fgets(verb, 255, stdin);
    len = strlen(verb);
    if (verb[len-1] == '\n') verb[len-1] = '\0';

    printf("Enter an adjective: ");
    fgets(adjective, 255, stdin);
    len = strlen(adjective);
    if (adjective[len-1] == '\n') adjective[len-1] = '\0';

    printf("Enter an adverb: ");
    fgets(adverb, 255, stdin);
    len = strlen(adverb);
    if (adverb[len-1] == '\n') adverb[len-1] = '\0';

    printf("Do you %s your %s %s %s? That's hilarious!\n", verb, adjective, noun, adverb);

    return 0;
}
