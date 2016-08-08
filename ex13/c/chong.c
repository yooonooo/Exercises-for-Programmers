//
//  ex13.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    // Exercise 13
    int principal, years, number_of_interest_compounded_times;
    double interest_rate, investment_with_compound_interest;


    // Input part
    printf("What is the principal amount? ");
    scanf("%d", & principal);

    printf("What is the rate? ");
    scanf("%lf", & interest_rate);

    printf("What is the number of years? ");
    scanf("%d", & years);

    printf("What is the number of times the interest \nis compounded per year? ");
    scanf("%d", & number_of_interest_compounded_times);


    // Calculation part
    investment_with_compound_interest =
        ((double) principal) *
         pow((1.0 + ((interest_rate / 100.0F) / ((double) number_of_interest_compounded_times))),
             ((double) (number_of_interest_compounded_times * years)));
    investment_with_compound_interest =
        ((double) (((int) (investment_with_compound_interest * 1000.0 + 9.0)) / 10)) / 100.0;


    // Printing part
    printf("$%d invested at %.2f for %d years compounded %d times per year is $%.2f.\n",
           principal, interest_rate, years, number_of_interest_compounded_times, investment_with_compound_interest);


    return 0;
}
