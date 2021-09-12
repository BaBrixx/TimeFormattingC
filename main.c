//
//  main.c
//  Time Formatter
//
//  Created by Bastian Hansen on 03/09/2021.
//  Copyright © 2021 Bastian Hansen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define SECONDS_WEEK 604800
#define SECONDS_DAY 86400
#define SECONDS_HOUR 3600
#define SECONDS_MINUTE 60

int main() {
    int secondsInput, weeks, days, hours, minutes, seconds;
    char week[5] = "weeks";

    printf("Type the amount of seconds you want translated: ");
    scanf("%d", &secondsInput);

    // Calculating 
    weeks = secondsInput / SECONDS_WEEK;
    days = (secondsInput % SECONDS_WEEK) / SECONDS_DAY;
    hours = (secondsInput % SECONDS_DAY) / SECONDS_HOUR;
    minutes = (secondsInput % SECONDS_HOUR) / SECONDS_MINUTE;
    seconds = secondsInput % SECONDS_MINUTE;
    
    // Printing result
    printf("%d seconds translates to %d weeks, %d days, %d hours, %d minutes and %d seconds.\n", secondsInput, weeks, days, hours, minutes, seconds);

    return EXIT_SUCCESS;
}

