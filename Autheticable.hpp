#pragma once

#include <string>

class Autheticable
{
private:
	std::string password;

public:
	explicit Autheticable(std::string& password);
	bool authenticate(std::string& password);
};

