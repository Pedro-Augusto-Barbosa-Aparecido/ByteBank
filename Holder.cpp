#include "Holder.hpp"

Holder::Holder(Cpf& cpf, std::string name, std::string password) :
	Person(cpf, name),
	Autheticable(password)
{
}
