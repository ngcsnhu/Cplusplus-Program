// Project:     24EW3_CS210_3-3_Campau
// File:        Clock.h
// Author:      Noah Campau
// Date:        January 22, 2024
// Purpose:		Develop an object-oriented programming (OOP) application to create two clocks that display simultaneously and allow for user input using secure and efficient C++ code.

#define _CRT_SECURE_NO_WARNINGS   // Allows Visual Studios to Compile Local Time Implemented by the C Time Library Included in Header

#pragma once			          // Run Header File Once per User Input

#include <ctime>		          // Inculde C Time Library
#include <iomanip>		          // Include Input/Ouput Manipulation Library
#include <iostream>		          // Include Input/Output Stream Library

using namespace std;	          // Use Standard Namespace

class Clock_Units                 // Define Clock_Units as Class
{
public:
    int second;                   // Declare Second as Integer
    int minute;                   // Declare Minute as Integer
    int hour;                     // Declare Hour as Integer
};

class Clock_12Hour : public Clock_Units     // Define Class Clock_12Hour for the 12-Hour Clock that Inherits Class Clock_Units
{
public:
    string meridian;              // Declare Meridian as String

    void incrementSecond(int sec) // Define incrementSecond as Void with Second (sec) Integer as Function Parameter
    {
        second += sec;            // Add Second (sec) from Function Parameter to Second Variable from Class Clock_Units

        if (second >= 60)         // If Second is Greater Than or Equal to 60
        {
            int min = second / 60;// Set Minute (min) Equal to Seconds Divided by 60
            second -= 60 * min;   // Decrement Seconds to Zero Once Seconds is Greater Than or Equal to 60
            incrementMinute(min); // Call Function incrementMinute to Increase Minute (min)
        }
    }

    void incrementMinute(int min) // Define incrementMinute as Void with Minute (min) Integer as Function Parameter
    {
        minute += min;            // Add Minute (min) from Function Parameter to Minute Variable from Class Clock_Units

        if (minute >= 60)         // If Minutes is Greater Than or Equal to 60
        {
            int hr = minute / 60; // Set Hour (hr) Equal to Minutes Divided by 60
            minute -= 60 * hr;    // Decrement Seconds to Zero Once Seconds is Greater Than or Equal to 60
            incrementHour(hr);    // Call Function incrementHour to Increase Hour (hr)
        }
    }

    void incrementHour(int hr)             // Define incrementHour as Void with Hour (hr) Integer as Function Parameter
    {   
        hour += hr;                        // Add Hour (hr) from Function Parameter to Hour Variable from Class Clock_Units
        
        if (hour > 12)                     // If Hour is Greater Than 12
        {
            hour -= 12;                    // Subtract 12 from Hour for Meridian Switch on 12-Hour Clock
        }
        else if (hour >= 12)               // Else If Hour is Greater Than or Equal to 12, Switch Meridian on 12-Hour Clock
        { 
            if (meridian == "AM")          // Is the Current Meridian AM?
            {
                meridian = "PM";           // Switch to PM on 12-Hour Clock
            }
            else if (meridian == "PM")     // Is the Current Meridian PM?
            {
                meridian = "AM";           // Switch to Am on 12-Hour Clock
            }
        }
    }

    Clock_12Hour()                         // Default Constructor for Class Clock_12Hour
    {
        time_t currentTime = time(0);                   // Create Object to Initialize Local Time for 12-Hour Clock
        tm* currentLocal = localtime(&currentTime);     // Set the Current Local Time to Current Time on Personal Computer

        second = currentLocal->tm_sec;                  // Set Default Clock Second to What the Second is from the Current Local Time
        minute = currentLocal->tm_min;                  // Set Default Clock Minute to What the Minute is from the Current Local Time
        hour = currentLocal->tm_hour;                   // Set Default Clock Hour to What the Hour is from the Current Local Time

        if (hour >= 12)                    // Is House of Current Local Time on PC Greater Than or Equal to 12?
        {
            meridian = "PM";               // Set Default Meridian to PM on Clock
            hour -= 12;                    // Decrement Hour by 12
        }
        else
        {
            meridian = "AM";               // Otherwise, Set Default Meridian on AM on Clock
        }
    }
};

class Clock_24Hour : public Clock_Units  // Define Class Clock_24Hour for the 12-Hour Clock that Inherits Class Clock_Units
{ 
public:
    void incrementSecond(int sec)   // Define incrementSecond as Void with Second (sec) Integer as Function Parameter
    {
        second += sec;              // Add Second (sec) from Function Parameter to Second Variable from Class Clock_Units

        if (second >= 60)           // If Second is Greater Than or Equal to 60
        {
            int min = second / 60;  // Set Minute (min) Equal to Seconds Divided by 60
            second -= 60 * min;     // Decrement Seconds to Zero Once Seconds is Greater Than or Equal to 60
            incrementMinute(min);   // Call Function incrementMinute to Increase Minute (min)
        }
    }

    void incrementMinute(int min)   // Define incrementMinute as Void with Minute (min) Integer as Function Parameter
    {
        minute += min;              // Add Minute (min) from Function Parameter to Minute Variable from Class Clock_Units

        if (minute >= 60)           // If Minutes is Greater Than or Equal to 60
        {
            int hr = minute / 60;   // Set Hour (hr) Equal to Minutes Divided by 60
            minute -= 60 * hr;      // Decrement Seconds to Zero Once Seconds is Greater Than or Equal to 60
            incrementHour(hr);      // Call Function incrementHour to Increase Hour (hr)
        }
    }

    void incrementHour(int hr)      // Define incrementHour as Void with Hour (hr) Integer as Function Parameter
    {
        hour += hr;                 // Add Hour (hr) from Function Parameter to Hour Variable from Class Clock_Units
        
        if (hour >= 24)             // If Hour is Greater Than or Equal to 24
        {
            hour -= 24;             // Decrement Hour by 24 to Reset the Hour back to Zero on 24-Hour Clock
        }
    }

    Clock_24Hour()                  // Default Constructor for Class Clock_24Hour
    {
        time_t currentTime = time(0);                // Create Object to Initialize Local Time for 12-Hour Clock
        tm* currentLocal = localtime(&currentTime);  // Set the Current Local Time to What the System Clock is Set As 
        
        second = currentLocal->tm_sec;               // Set Default Clock Second to What the Second is from the Current Local Time
        minute = currentLocal->tm_min;               // Set Default Clock Minute to What the Minute is from the Current Local Time
        hour = currentLocal->tm_hour;                // Set Default Clock Hour to What the Hour is from the Current Local Time
    }
};