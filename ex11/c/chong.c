//
//  ex11.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    // Exercise 11
    char str_amount_euro[16], str_rate_euro[16];
    int len;
    double amount_dollar, rate_dollar, amount_euro, rate_euro;
    char output_string[128];


    // Input part
    printf("How many Euros are you exchanging? ");
    fgets(str_amount_euro, 16, stdin);
    len = strlen(str_amount_euro);
    if (str_amount_euro[len-1] == '\n') str_amount_euro[len-1] = '\0';

    printf("What is the exchange rate? ");
    fgets(str_rate_euro, 16, stdin);
    len = strlen(str_rate_euro);
    if (str_rate_euro[len-1] == '\n') str_rate_euro[len-1] = '\0';

    amount_euro = atof(str_amount_euro);
    rate_euro = atof(str_rate_euro);


    // Calculation part
    rate_dollar = 100.0F;
    amount_dollar = amount_euro * rate_euro / rate_dollar;
    amount_dollar = ((double) (((int) (amount_dollar * 1000.0 + 9.0)) / 10)) / 100.0;

    sprintf(output_string, "%.2f Euros at an exchange rate of %.2f is \n%.2f dollars.\n",
            amount_euro, rate_euro, amount_dollar);


    // Printing part
    printf("%s", output_string);


    return 0;
}
