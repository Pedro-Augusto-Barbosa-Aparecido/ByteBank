#pragma once

#include <string>

#include "Employee.hpp"
#include "Cpf.hpp"
#include "Autheticable.hpp"
#include "WeekDays.hpp"

class Manager final :
	public Employee,
	public Autheticable
{
public:
	Manager(Cpf cpf, std::string name, float salary, std::string password, WeekDays paymentDay);
	float bonus() const override;
};

