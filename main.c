#include <stdio.h>

#define SECONDS_WEEK 604800
#define SECONDS_DAY 86400
#define SECONDS_HOUR 3600
#define SECONDS_MINUTE 60

int main() {
    long int secondsInput, weeks;
    int days, hours, minutes, seconds;

    // Creating additional temporary variables to avoid having to calculate the same things over and over again
    int weeksModolo, daysModolo, hoursModolo, minutesModolo;

    printf("Type the amount of seconds you want translated: ");
    scanf("%ld", &secondsInput);

    // Calculating 
    weeks = secondsInput / SECONDS_WEEK;
    weeksModolo = secondsInput % SECONDS_WEEK;
    days = weeksModolo / SECONDS_DAY;
    daysModolo = weeksModolo % SECONDS_DAY;
    hours = daysModolo / SECONDS_HOUR;
    hoursModolo = daysModolo % SECONDS_HOUR;
    minutes = hoursModolo / SECONDS_MINUTE;
    seconds = hoursModolo % SECONDS_MINUTE;
    
    // Printing result
    printf("%ld seconds translates to %ld weeks, %d days, %d hours, %d minutes and %d seconds.\n", secondsInput, weeks, days, hours, minutes, seconds);

    return 0;
}