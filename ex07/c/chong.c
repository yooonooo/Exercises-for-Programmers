//
//  ex07.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Exercise 07
	const double square_feet_to_square_meter = 0.09290304;
    double length, width, area_sf, area_sm;

    printf("What is the length of the room in feet? ");
	scanf("%lf", & length);

    printf("What is the width of the room in feet? ");
	scanf("%lf", & width);

    // Calculation part
	area_sf = length * width;
	area_sm = area_sf * square_feet_to_square_meter;

    // Printing part
    printf("You entered dimensions of %.1f feet by %.1f feet\nThe area is\n%.3f square feet\n%.3f square meters.\n",
           length, width, area_sf, area_sm);

    return 0;
}
