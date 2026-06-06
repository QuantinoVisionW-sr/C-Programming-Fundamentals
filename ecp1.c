#include<stdio.h>
#include<stdbool.h>




enum  kMonth {jan = 1 , fab , mar , apr, may , jun , jul, aug, sep, oct, nov, dec};
enum kDay {sun , mon , tue , thus , fri , sat};


struct data {
    enum kMonth month ;
    enum kDay day ;
    int year ;
};
// date types 
typedef struct date Date ;
// functions that work with dates 
Date dateUpdate (Date today );
int numberOfDays (Date d);
bool isLeapYear(Date d);


// Macro to set a date in a structure 
#define setDate(s, mm , dd, yy ) s = (Date) {mm, dd, yy}
// external variable references 
extern Date todaysDate;


int main() {
    // 1. Test a standard date update
    printf("--- Test 1: Standard Day ---\n");
    setDate(todaysDate, jan, 31, 2023);
    printDate(todaysDate);
    todaysDate = dateUpdate(todaysDate);
    printDate(todaysDate);

    // 2. Test Leap Year (Feb 29)
    printf("\n--- Test 2: Leap Year ---\n");
    setDate(todaysDate, fab, 28, 2024); // 2024 is a leap year
    printDate(todaysDate);
    todaysDate = dateUpdate(todaysDate);
    printDate(todaysDate);

    // 3. Test End of Year
    printf("\n--- Test 3: End of Year ---\n");
    setDate(todaysDate, dec, 31, 2025);
    printDate(todaysDate);
    todaysDate = dateUpdate(todaysDate);
    printDate(todaysDate);

    return 0;
}

// Function to calculate tomorrow's date
Date dateUpdate(Date today) {
    Date tomorrow = today;

    // Check if the current day is not the last day of the month
    if (today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
    } 
    // It is the last day of the month
    else {
        tomorrow.day = 1; // Reset day to 1
        
        // If it is December, reset month to January and increment year
        if (today.month == dec) {
            tomorrow.month = jan;
            tomorrow.year = today.year + 1;
        } 
        // Otherwise, just increment the month
        else {
            tomorrow.month = today.month + 1;
        }
    }
    return tomorrow;
}

// Function to determine days in a month
int numberOfDays(Date d) {
    int days;
    const int daysPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // If it is NOT February, return standard days from array
    if (d.month != fab) {
        days = daysPerMonth[d.month];
    } 
    // If it IS February, check for leap year
    else {
        if (isLeapYear(d)) {
            days = 29;
        } else {
            days = 28;
        }
    }
    return days;
}

// Function to check leap year logic
bool isLeapYear(Date d) {
    bool isLeap = false;
    
    // Leap year rule: Divisible by 4, unless divisible by 100 but not 400
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        isLeap = true;
    }
    return isLeap;
}

// Helper to print output cleanly
void printDate(Date d) {
    printf("Date: %02d/%02d/%d\n", d.month, d.day, d.year);
}