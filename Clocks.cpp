/*
 * Clocks.cpp
 *
 *  Date: 5/26/2024
 *  Author: Suzette Gonzalez
 */

#include <iostream>
using namespace std;

// Declare the functions that will be defined
void addOneHour( unsigned int* hours );
void addOneMinute( unsigned int* hours, unsigned int* minutes );
void addOneSecond( unsigned int* hours, unsigned int* minutes, unsigned int* seconds );
void printTime( unsigned int hours, unsigned int minutes, unsigned int seconds );
void printMenu();

int main( void )
{

    // Declare the variables used for the time
    unsigned int hours   = 0;
    unsigned int minutes = 59;
    unsigned int seconds = 0;

    // Declare the variable for the user choice
    unsigned int choice = 0;

    // Go through this loop until the user decides to exit
    while( true )
    {
        // Print out the time
        printTime( hours, minutes, seconds );

        // Print out the menu
        printMenu();

        // Get the option from the user
        scanf("%d", &choice);

        if( choice == 1 )
        {
            addOneHour( &hours );
        }
        else if ( choice == 2 )
        {
            addOneMinute( &hours, &minutes );
        }
        else if (choice == 3 )
        {
            addOneSecond( &hours, &minutes, &seconds );
        }

        // If the choice is to exit, break out of the loop
        else if( choice == 4 )
        {
            break;
        }

        // If they can't follow instructions, print a message and break out of the loop
        else
        {
            printf("Invalid choice. Good bye.\n");
            break;
        }
    }

    return 0;
}

void addOneHour( unsigned int* hours )
{
    // If the current hours are 23
    if( *hours == 23 )
    {
        // Set the hours to zero
        *hours = 0;
    }

    // Otherwise increase the hours by one
    else
    {
        *hours += 1;
    }
}

void addOneMinute( unsigned int* hours, unsigned int* minutes )
{
    // If the current minutes are 59
    if( *minutes == 59 )
    {
        // Set the minutes to zero
        *minutes = 0;

        // Add one hour
        addOneHour( hours );
    }

    // Otherwise increase the minutes by one
    else
    {
        *minutes += 1;
    }
}

void addOneSecond( unsigned int* hours, unsigned int* minutes, unsigned int* seconds )
{
    // If the current seconds are 59
    if( *seconds == 59 )
    {
        // Set the seconds to zero
        *seconds = 0;

        // Add one minute
        addOneMinute( hours, minutes );
    }

    // Otherwise increase the seconds by one
    else
    {
        *seconds += 1;
    }
}

void printTime( unsigned int hours, unsigned int minutes, unsigned int seconds )
{
    unsigned int hours12 = 0;
    char forTime[] = "A";

    // If the current hours are greater than 12
    if ( hours > 12)
    {
        // Set the character for PM
        forTime[0] = 'P';

        // Offset the hours
        hours12 = (hours - 12);
    }

    // If the current hour is 0, set the 12 hour clock to 12
    else if ( hours == 0 )
    {
        hours12 = 12;
    }
    // Otherwise use the current hours
    else
    {
        hours12 = hours;
    }

    // Format the string to print out the time
    printf("**************************      **************************\n");
    printf("*      12-Hour Clock     *      *      24-Hour Clock     *\n");
    printf("*      %02d:%02d:%02d %s M      *      *         %02d:%02d:%02d       *\n",
        hours12, minutes, seconds, forTime, hours, minutes, seconds
    );
    printf("**************************      **************************\n\n");
}

void printMenu()
{
    printf("**************************\n");
    printf("* 1 - Add One Hour       *\n\n");
    printf("* 2 - Add One Minute     *\n\n");
    printf("* 3 - Add One Second     *\n\n");
    printf("* 4 - Exit Program       *\n");
    printf("**************************\n\n");
}
