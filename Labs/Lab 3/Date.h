#pragma once

#include <iostream>
#include <string>

class Date {
public:
	Date(int _month, int _day, int _year) {
		month = _month;
		day = _day;
		year = _year;
		if (month > 12) {
			month = 1;
		}
		if (month <= 1) {
			month = 1;
		}
	}
	void setMonth(int newMonth) {
		month = newMonth;
		if (month > 12) {
			month = 1;
		}
		if (month <= 1) {
			month = 1;
		}
	}
	void setDay(int newDay) {
		day = newDay;
	}
	void setYear(int newYear) {
		year = newYear;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}
	void displayDate() {
		std::cout << month << '/' << day << '/' << year << '\n' << std::endl;
	}

private:
	int day, month, year;
};