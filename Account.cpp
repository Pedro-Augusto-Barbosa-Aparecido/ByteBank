#include <iostream>
#include "Account.hpp"

int Account::numberOfAccounts = 0;

Account::Account(std::string& numberOfAccount, Holder& holder) :
	numberOfAccount(numberOfAccount),
	holder(holder),
	balance(0)
{
	numberOfAccounts++;
}

Account::~Account() {
	numberOfAccounts--;
}

std::variant<Account::WithdrawResult, float> Account::toWithdraw(float valueToWithdraw) {
	if (valueToWithdraw < 0) {
		std::cout << "Não pode sacar valor negativo" << std::endl;

		return NegativeValue;
	}

	float withdrawFee = valueToWithdraw * this->getTax();
	valueToWithdraw += withdrawFee;

	if (valueToWithdraw > this->balance) {
		std::cout << "Saldo insuficiente" << std::endl;

		return InsufficientBalance;
	}

	this->balance -= valueToWithdraw;
	return this->balance;
}

void Account::deposit(float valueToDeposit) {
	if (valueToDeposit < 0) {
		std::cout << "Não pode depositar valor negativo" << std::endl;

		return;
	}

	this->balance += valueToDeposit;
}

float Account::getBalance() const {
	return this->balance;
}

std::string Account::getNumberOfAccount() const {
	return this->numberOfAccount;
}

int Account::getNumberOfAccounts() {
	return Account::numberOfAccounts;
}

Holder Account::getHolder() const {
	return this->holder;
}

void Account::operator+=(float valueToDeposit) {
	this->deposit(valueToDeposit);
}

bool Account::operator<(const Account& account) const {
    return this->balance < account.balance;
}
