#pragma once

#include <string>

#include "Cpf.hpp"
#include "Person.hpp"
#include "Autheticable.hpp"

class Holder :
	public Person<Cpf>,
	public Autheticable
{
public:
	Holder(Cpf& cpf, std::string name, std::string password);
};

