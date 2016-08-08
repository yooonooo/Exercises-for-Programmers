//
//  ex09.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Exercise 09
    int length, width;
    int area, liters_of_paint;

    printf("What is the length of the ceiling? ");
    scanf("%d", & length);

    printf("What is the width of the ceiling? ");
    scanf("%d", & width);

    area = length * width;
    liters_of_paint = (area + 8) / 9;

    printf("You will need to purchase %d liters of\npaint to cover %d square meters.\n",
           liters_of_paint, area);

    return 0;
}
