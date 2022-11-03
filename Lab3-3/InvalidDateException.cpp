#include "InvalidDateException.h"

InvalidDateException::InvalidDateException(std::string message)
{
	this->message = message;
}

std::string InvalidDateException::getMessage()
{
	return message;
}
