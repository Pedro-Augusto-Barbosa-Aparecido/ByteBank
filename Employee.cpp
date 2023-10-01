#include "Employee.hpp"

Employee::Employee(Cpf& cpf, std::string name, float salary, WeekDays paymentDay) :
	Person(cpf, name),
	salary(salary),
	paymentDay(paymentDay)
{
}

float Employee::getSalary() const {
	return this->salary;
}

std::string Employee::getName() const {
	return this->name;
}
