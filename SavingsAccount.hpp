#pragma once

#include <string>

#include "Account.hpp"
#include "Holder.hpp"

class SavingsAccount final : public Account
{
public:
	SavingsAccount(std::string numberOfAccount, Holder holder);
	~SavingsAccount() override;

	float getTax() const override;
};
