#pragma once

#include <string>

#include "Employee.hpp"
#include "Cpf.hpp"
#include "WeekDays.hpp"

class Cashier final : public Employee
{
public:
	Cashier(Cpf cpf, std::string name, float salary, WeekDays paymentDay);
	float bonus() const override;
};

