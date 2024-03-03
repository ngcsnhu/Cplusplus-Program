// Project:     24EW3_CS210_3-3_Campau
// File:        Clock.cpp
// Author:      Noah Campau
// Date:        January 22, 2024
// Purpose:		Develop an object-oriented programming (OOP) application to create two clocks that display simultaneously and allow for user input using secure and efficient C++ code.

#include "Clock.h"	// Include Clock Header

void displayClocks(Clock_12Hour displayClock12, Clock_24Hour displayClock24)  // Define Display Clocks as Void with Clock12 and Clock24 as Function Parameters
{
    // Output The Flower Boxes as Borders Around the Clock Titles for Each Clock and Center Accordingly
    cout << setfill('*') << setw(27) << "\t\t" << setfill('*') << setw(26) << "\t" << endl;
    cout << "*     12-Hour Clock\t*\t\t";
    cout << "*     24-Hour Clock\t*\t" << endl;

    // Output The Display of Each Hour, Minutes, and Seconds of The 12-Hour Clock and Center Accordingly
    cout << "*      " << setw(2) << setfill('0') << displayClock12.hour;
    cout << ":" << setw(2) << setfill('0') << displayClock12.minute;
    cout << ":" << setw(2) << setfill('0') << displayClock12.second << " " << displayClock12.meridian << "\t*\t\t";

    // Output The Display of Each Hour, Minutes, and Seconds of The 12-Hour Clock and Center Accordingly
    cout << "*\t" << setw(2) << setfill('0') << displayClock24.hour;
    cout << ":" << setw(2) << setfill('0') << displayClock24.minute;
    cout << ":" << setw(2) << setfill('0') << displayClock24.second << "\t*" << endl;
    cout << setfill('*') << setw(27) << "\t\t" << setfill('*') << setw(26) << "\t" << endl;
}

void displayMenu()  // Define Display Menu as Void to Display User Instructions for Input
{
    cout << "\n" << setfill('*') << setw(26) << "\t" << endl;   // Output Top-Line of Flower Box
    cout << "* 1 - Add One Hour\t*" << endl;                    // Instruct User to Add One Hour by Inputting "1"
    cout << "* 2 - Add One Minute\t*" << endl;                  // Instruct User to Add One Minute by Inputting "2"
    cout << "* 3 - Add One Second\t*" << endl;                  // Instruct User to Add One Hour by Inputting "3"
    cout << "* 4 - Exit Program\t*" << endl;                    // Instruct User to Exit Program by Inputting "4"
    cout << setfill('*') << setw(26) << "\t" << endl;           // Output Bottom-Line of Flower Box
}

int main()
{
    Clock_12Hour ClockObj12;     // Implement Class Clock12 with ClockObj12 as Object
    Clock_24Hour ClockObj24;     // Implement Class Clock24 with ClockObj24 as Object

    int menuInput = 0;           // Initialize Menu Input for User

    while (menuInput != 4)       // Loop Through Switch Cases Until User Inputs "4" to Exit Program
    {
        displayClocks(ClockObj12, ClockObj24);  // Call Function displayClocks to Display 12-Hour and 24-Hour Clocks
        displayMenu();                          // Call displayMenu Function to Prompt Instructions for User Input

        cout << endl << "Welcome. Please make your selection -> ";

        cin >> menuInput;   // Read User Input

        switch (menuInput)  // Apply User Input Based on Selection
        {
        case 1:             // Did User Select "1" to Add One Hour?
            ClockObj12.incrementHour(1);  // If so, Increment the Hour on 12-Hour Clock by 1 using Class Object for Clock12
            ClockObj24.incrementHour(1);  // Then, Increment the Hour on 24-Hour Clock by 1 using Class Object for Clock12
            system("CLS");                // Afterwards, Clear User Input on Output Screen
            break;                        // Finally,Break Loop to Restart User Input

        case 2:             // Did User Select "2" to Add One Minute?
            ClockObj12.incrementMinute(1);  // If so, Increment the Minutes on 12-Hour Clock by 1 using Class Object for Clock12
            ClockObj24.incrementMinute(1);  // Then, Increment the Minutes on 12-Hour Clock by 1 using Class Object for Clock12
            system("CLS");                  // Afterwards, Clear User Input on Output Screen
            break;                          // Finally,Break Loop to Restart User Input

        case 3:             // Did User Select "3" to Add One Second?
            ClockObj12.incrementSecond(1);  // If so, Increment the Seconds on 12-Hour Clock by 1 using Class Object for Clock12
            ClockObj24.incrementSecond(1);  // Then, Increment the Seconds on 12-Hour Clock by 1 using Class Object for Clock12
            system("CLS");                  // Afterwards, Clear User Input on Output Screen
            break;                          // Finally,Break Loop to Restart User Input

        case 4:             // Did User Select "4" to Exit Program?
            cout << "Program Ended Successfully" << endl;   // If so, End Program with Confirmation on Output Screen
            break;                                          // Then, Break Loop to End Program

        default:            // Did User Input an Invalid Selection from Menu?
            system("CLS");  // If so, Clear User Input on Output Screen and Display Error Message to User
            cout << "Selection Error. Please retry using the following selections on menu." << endl << endl;
        }
    }
}