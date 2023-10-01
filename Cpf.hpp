#pragma once

#include <string>

class Cpf
{
private:
	std::string cpf;

public:
	explicit Cpf(std::string cpf);
	std::string getValue() const;
};

