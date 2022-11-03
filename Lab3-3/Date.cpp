#include "Date.h"

void Date::validate()
{
    if ( !(month >= 0 && month <= 12 && day >= 0 && day <= 31) ) {
        throw InvalidDateException("Entered invalid date");
    }
}
Date::Date(int day, int month, int year, string event)
{
    this->day = day;
    this->month = month;
    this->year = year;
    this->event = event;
    validate();
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

string Date::getEvent()
{
    return event;
}

Date Date::operator=(Date& date)
{
    return Date(date.day, date.month, date.year, date.event);
}



bool operator==(Date& date1, Date& date2)
{
    return date1.year == date2.year && date1.month == date2.month && date1.day == date2.day;
}

bool operator!=(Date& date1, Date& date2)
{
    return !operator==(date1, date2);
}

bool operator<(Date& date1, Date& date2)
{
    return date1.year < date2.year && date1.month < date2.month && date1.day < date2.day;
}

bool operator>(Date& date1, Date& date2)
{
    return !operator<(date1, date2);
}

bool operator<=(Date& date1, Date& date2)
{
    return operator<(date1, date2) || operator==(date1, date2);
}

bool operator>=(Date& date1, Date& date2)
{
    return operator>(date1, date2) || operator==(date1, date2);
}

ostream& operator<<(ostream& os, const Date& d)
{
    os << d.day << ":" << d.month << ":" << d.year << " " << d.event;
    return os;
}
