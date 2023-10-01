#include "Autheticable.hpp"

Autheticable::Autheticable(std::string& password) :
	password(password)
{
}

bool Autheticable::authenticate(std::string& passwordToCompare) {
	return this->password == passwordToCompare;
}
