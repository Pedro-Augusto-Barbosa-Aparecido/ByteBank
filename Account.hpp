#pragma once

#include <string>
#include <variant>
#include <utility>
#include <iostream>

#include "Holder.hpp"

class Account
{
private:
	static int numberOfAccounts;
public:
	static int getNumberOfAccounts();

	enum WithdrawResult {
		Success,
		NegativeValue,
		InsufficientBalance,
	};

private:
	Holder holder;
	std::string numberOfAccount;

protected:
	float balance;

public:
	Account(std::string& numberOfAccount, Holder& holder);
	virtual ~Account();

	std::variant<Account::WithdrawResult, float> toWithdraw(float valueToWithdraw);
	void deposit(float valueToDeposit);

	float getBalance() const;
	std::string getNumberOfAccount() const;
	virtual float getTax() const = 0;

	Holder getHolder() const;

	void operator+=(float valueToDeposit);

    bool operator<(const Account& account) const;
	friend std::ostream& operator<<(std::ostream& outputStream, const Account& account);

	//void setName(std::string name);
	//void setCpf(std::string cpf);
	//void setNumberOfAccount(std::string numberOfAccount);
};
