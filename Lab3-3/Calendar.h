#pragma once

#include <vector>
#include "Date.h"

class Calendar
{
	vector<Date> dates;
public:
	Calendar();
	vector<Date> findBy(int year);
	vector<Date> findBy(int year, int month);
	vector<Date> findBy(int year, int month, int day);
	void addDate(Date& date);
};

