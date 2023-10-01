#include "SavingsAccount.hpp"

#include <iostream>

SavingsAccount::SavingsAccount(std::string numberOfAccount, Holder holder) :
	Account(numberOfAccount, holder)
{
}

SavingsAccount::~SavingsAccount()
= default;

float SavingsAccount::getTax() const {
	return 0.03f;
}