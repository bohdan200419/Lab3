#include "Calendar.h"

Calendar::Calendar()
{
	dates = vector<Date>();
}

vector<Date> Calendar::findBy(int year)
{
	vector<Date> searchResult = vector<Date>();
	for (Date date : dates) {
		if (date.getYear() == year) {
			searchResult.push_back(date);
		}
	}
	return searchResult;
}

vector<Date> Calendar::findBy(int year, int month)
{
	vector<Date> searchResult = vector<Date>();
	for (Date date : dates) {
		if (date.getYear() == year && date.getMonth() == month) {
			searchResult.push_back(date);
		}
	}
	return searchResult;
}

vector<Date> Calendar::findBy(int year, int month, int day)
{
	vector<Date> searchResult = vector<Date>();
	for (Date date : dates) {
		if (date.getYear() == year && date.getMonth() == month && date.getDay() == day) {
			searchResult.push_back(date);
		}
	}
	return searchResult;
}

void Calendar::addDate(Date& date)
{
	dates.push_back(date);
}
