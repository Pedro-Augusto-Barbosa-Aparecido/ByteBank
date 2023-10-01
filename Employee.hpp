#pragma once

#include <string>
#include "Cpf.hpp"
#include "Person.hpp"
#include "WeekDays.hpp"

class Employee : public Person<Cpf>
{
private:
	float salary;

	WeekDays paymentDay;

public:
	Employee(Cpf& cpf, std::string name, float salary, WeekDays paymentDay);

	float getSalary() const;
	std::string getName() const;

	virtual float bonus() const = 0;
};

