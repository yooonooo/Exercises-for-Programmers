//
//  ex12.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Exercise 12
    int principal, years;
    double interest_rate, investment_with_simple_interest;


    // Input part
    printf("Enter the principal: ");
    scanf("%d", & principal);

    printf("Enter the rate of interest: ");
    scanf("%lf", & interest_rate);

    printf("Enter the number of years: ");
    scanf("%d", & years);


    // Calculation part
    investment_with_simple_interest = ((double) principal) * (1.0 + ((interest_rate / 100.0F) * ((double) years)));
    investment_with_simple_interest = ((double) (((int) (investment_with_simple_interest * 1000.0 + 9.0)) / 10)) / 100.0;


    // Printing part
    printf("After %d years at %.2f, the investment will be worth $%.2f.\n",
           years, interest_rate, investment_with_simple_interest);


    return 0;
}
