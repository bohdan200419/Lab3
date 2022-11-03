#pragma once
#include <string>



class InvalidDateException
{
	std::string message;
public:
	InvalidDateException(std::string message);

	std::string getMessage();
};

