//
//  ex06.c
//
//  Copyright (c) 2016 Insightbook. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
    // Exercise 06
    char str_age[16], str_ret_age[16];
    int age, ret_age, current_year;
    int len;
    struct timeval today;
    struct tm * p_today;

    printf("What is your current age? ");
    fgets(str_age, 16, stdin);
    len = strlen(str_age);
    if (str_age[len-1] == '\n') str_age[len-1] = '\0';

    printf("At what age would you like to retire? ");
    fgets(str_ret_age, 16, stdin);
    len = strlen(str_ret_age);
    if (str_ret_age[len-1] == '\n') str_ret_age[len-1] = '\0';

    age = atoi(str_age); ret_age = atoi(str_ret_age);

    gettimeofday(&today, NULL);
    p_today = localtime(&(today.tv_sec));
    current_year = p_today->tm_year + 1900;

    printf("You have %d years left until you can retire.\nIt's %d, so you can retire in %d.\n",
           ret_age-age, current_year, current_year+ret_age-age);

    return 0;
}
