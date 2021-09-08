#include <stdio.h>

#define SECONDS_WEEK 604800
#define SECONDS_DAY 86400
#define SECONDS_HOUR 3600
#define SECONDS_MINUTE 60

int main() {
    long int secondsInput, weeks;
    int days, hours, minutes, seconds;

    printf("Type the amount of seconds you want translated: ");
    scanf("%ld", &secondsInput);

    // Calculating 
    weeks = secondsInput / SECONDS_WEEK;
    days = (secondsInput % SECONDS_WEEK) / SECONDS_DAY;
    hours = (secondsInput % SECONDS_DAY) / SECONDS_HOUR;
    minutes = (secondsInput % SECONDS_HOUR) / SECONDS_MINUTE;
    seconds = secondsInput % SECONDS_MINUTE;
    
    // Printing result
    printf("%ld seconds translates to %ld weeks, %d days, %d hours, %d minutes and %d seconds.\n", secondsInput, weeks, days, hours, minutes, seconds);

    return 0;
}