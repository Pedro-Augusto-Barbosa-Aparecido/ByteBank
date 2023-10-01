#include "CheckingAccount.hpp"

CheckingAccount::CheckingAccount(std::string numberOfAccount, Holder holder) :
	Account(numberOfAccount, holder)
{
}

float CheckingAccount::getTax() const {
	return 0.05f;
}

void CheckingAccount::transferTo(Account& account, float valueToTransfer) {
	auto result = this->toWithdraw(valueToTransfer);

	if (result.index() == 1) {
		account.deposit(valueToTransfer);
		return;
	}
}

void CheckingAccount::operator+=(CheckingAccount& originAccount) {
	originAccount.transferTo(*this, originAccount.getBalance() / 2);
}