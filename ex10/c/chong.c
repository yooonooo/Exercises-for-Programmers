//
//  ex10.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    // Exercise 10
    char str_price_of_item1[16], str_quantity_of_item1[16];
    char str_price_of_item2[16], str_quantity_of_item2[16];
    char str_price_of_item3[16], str_quantity_of_item3[16];
    int len;
    int int_price_of_item1, int_quantity_of_item1;
    int int_price_of_item2, int_quantity_of_item2;
    int int_price_of_item3, int_quantity_of_item3;
    double subtotal, tax, total;
    char output_string[128];


    // Input part
    printf("Price of item 1: ");
    fgets(str_price_of_item1, 16, stdin);
    len = strlen(str_price_of_item1);
    if (str_price_of_item1[len-1] == '\n') str_price_of_item1[len-1] = '\0';

    printf("Quantity of item 1: ");
    fgets(str_quantity_of_item1, 16, stdin);
    len = strlen(str_quantity_of_item1);
    if (str_quantity_of_item1[len-1] == '\n') str_quantity_of_item1[len-1] = '\0';

    int_price_of_item1 = atoi(str_price_of_item1);
    int_quantity_of_item1 = atoi(str_quantity_of_item1);


    printf("Price of item 2: ");
    fgets(str_price_of_item2, 16, stdin);
    len = strlen(str_price_of_item2);
    if (str_price_of_item2[len-1] == '\n') str_price_of_item2[len-1] = '\0';

    printf("Quantity of item 2: ");
    fgets(str_quantity_of_item2, 16, stdin);
    len = strlen(str_quantity_of_item2);
    if (str_quantity_of_item2[len-1] == '\n') str_quantity_of_item2[len-1] = '\0';

    int_price_of_item2 = atoi(str_price_of_item2);
    int_quantity_of_item2 = atoi(str_quantity_of_item2);


    printf("Price of item 3: ");
    fgets(str_price_of_item3, 16, stdin);
    len = strlen(str_price_of_item3);
    if (str_price_of_item3[len-1] == '\n') str_price_of_item3[len-1] = '\0';

    printf("Quantity of item 3: ");
    fgets(str_quantity_of_item3, 16, stdin);
    len = strlen(str_quantity_of_item3);
    if (str_quantity_of_item3[len-1] == '\n') str_quantity_of_item3[len-1] = '\0';

    int_price_of_item3 = atoi(str_price_of_item3);
    int_quantity_of_item3 = atoi(str_quantity_of_item3);


    // Calculation part
    subtotal = (double) ((int_price_of_item1 * int_quantity_of_item1) +
                         (int_price_of_item2 * int_quantity_of_item2) +
                         (int_price_of_item3 * int_quantity_of_item3));
    tax = subtotal * 0.055F;
    total = subtotal + tax;

    sprintf(output_string, "Subtotal: $%.2f\nTax: $%.2f\nTotal: $%.2f\n",
            subtotal, tax, total);


    // Printing part
    printf("%s", output_string);


    return 0;
}
