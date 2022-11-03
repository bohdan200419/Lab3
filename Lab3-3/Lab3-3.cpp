#include <iostream>
#include "Date.h"
#include "Calendar.h"

int main()
{
    Calendar calendar = Calendar();
    Date date1 = Date(0, 12, 2003, "some event");
    Date date2 = Date(0, 12, 2003, "some event");
    Date date3 = Date(0, 8, 2003, "some event");
    Date date4 = Date(0, 8, 2003, "some event");
    Date date5 = Date(1, 8, 2003, "some event");
    Date date6 = Date(1, 8, 2003, "some event");
    calendar.addDate(date1);
    calendar.addDate(date2);
    calendar.addDate(date3);
    calendar.addDate(date4);
    calendar.addDate(date5);
    calendar.addDate(date6);
    cout << "By year 2003" << endl;
    for (Date date : calendar.findBy(2003)) {
        cout << date << endl;
    }
    cout << "By year and month 2003 8" << endl;
    for (Date date : calendar.findBy(2003, 8)) {
        cout << date << endl;
    }
    cout << "By year and month and day 2003 8 1" << endl;
    for (Date date : calendar.findBy(2003, 8, 1)) {
        cout << date << endl;
    }
    cout << "Invalid date input: " << endl;
    try {
        Date date = Date(0, -1, 2003, "some event");
    }
    catch (InvalidDateException e) {
        cout << e.getMessage();
    }
}