//
//  ex08.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Exercise 08
    int persons, pizzas, pieces;
    int share_of_each_person, leftover;

    printf("How many people? ");
    scanf("%d", & persons);

    printf("How many pizzas do you have? ");
    scanf("%d", & pizzas);

    printf("How many pieces are in a pizza? ");
    scanf("%d", & pieces);

    share_of_each_person = pizzas * pieces / persons;
    leftover = (pizzas * pieces) - (persons * share_of_each_person);

    printf("Each person gets %d pieces of a pizza.\nThere are %d leftover pieces.\n",
           share_of_each_person, leftover);

    return 0;
}
