#include "Cpf.hpp"

Cpf::Cpf(std::string cpf) : cpf(cpf)
{
}

std::string Cpf::getValue() const {
	return this->cpf;
}
