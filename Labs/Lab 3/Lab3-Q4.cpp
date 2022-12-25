/*4- (Date Class) Create a class called Date that includes three pieces of information as data members—a month 
(type int), a day (type int) and a year (type int). Your class should have a constructor with three parameters 
that uses the parameters to initialize the three data members. For the purpose of this exercise, assume that the 
values provided for the year and day are correct, but ensure that the month value is in the range 1–12; if it 
isn’t, set the month to 1. Provide a set and a get function for each data member. Provide a member function 
displayDate that displays the month, day and year separated by forward slashes (/). Write a test program that 
demonstrates class Date’s capabilities.*/
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date date1(8, 6, 2016);
    
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Day: " << date1.getDay() << endl;
    cout << "Year: " << date1.getYear() << endl;

    cout << "\nOriginal date: ";
    date1.displayDate();

    date1.setMonth(1);
    date1.setDay(1);
    date1.setYear(2017);

    cout << "New date: ";
    date1.displayDate();




}


