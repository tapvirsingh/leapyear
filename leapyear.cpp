#include <iostream>

using namespace std ;

int main(void) {
    // Display the output.
    cout << "\nEnter an year (yyyy) : ";

    // Declare an integer variable to hold year.
    int yr;

    // Take the input from the user.
    cin >> yr;

    // To determine whether a year is a leap year, follow these steps:

    // 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
    // 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
    // 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
    // 4. The year is a leap year (it has 366 days).
    // 5. The year is not a leap year (it has 365 days).

    bool isLeapYear = (((yr % 4) == 0) && ((yr % 100) != 0)) || ((yr % 400) == 0);

    // If the year is divisible by 4 
    if (isLeapYear) {
        // Then its a leap year.
        cout << "The year " << yr << " is a leap year.";
    }
    else {
        // If not its not a leap year.
        cout << "The year " << yr << " is not a leap year.";
    }

    // All went well.
    return 0;
}