#include "Cashier.hpp"

Cashier::Cashier(Cpf cpf, std::string name, float salary, WeekDays paymentDay) :
	Employee(cpf, name, salary, paymentDay)
{
}

float Cashier::bonus() const {
	return this->getSalary() * 0.1f;
}
