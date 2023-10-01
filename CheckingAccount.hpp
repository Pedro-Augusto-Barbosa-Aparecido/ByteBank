#pragma once

#include <string>

#include "Account.hpp"
#include "Holder.hpp"

class CheckingAccount final : public Account
{
public:
	CheckingAccount(std::string numberOfAccount, Holder holder);

	float getTax() const override;
	void transferTo(Account& account, float valueToTransfer);

	void operator+=(CheckingAccount& originAccount);
};

