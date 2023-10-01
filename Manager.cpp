#include "Manager.hpp"

Manager::Manager(Cpf cpf, std::string name, float salary, std::string password, WeekDays paymentDay) :
	Employee(cpf, name, salary, paymentDay),
	Autheticable(password)
{
}

float Manager::bonus() const {
	return this->getSalary() * 0.5f;
}
