#pragma once
#include <iostream>
#include <string>
#include "InvalidDateException.h"

using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
	string event;
public:
	Date(int day, int month, int year, string event);
	void validate();
	int getDay();
	int getMonth();
	int getYear();
	string getEvent();
	Date operator=(Date& date);
	friend bool operator==(Date& date1, Date& date2);
	friend bool operator!=(Date& date1, Date& date2);
	friend bool operator<(Date& date1, Date& date2);
	friend bool operator>(Date& date1, Date& date2);
	friend bool operator<=(Date& date1, Date& date2);
	friend bool operator>=(Date& date1, Date& date2);
	friend ostream& operator<<(ostream& os, const Date& d);
};


