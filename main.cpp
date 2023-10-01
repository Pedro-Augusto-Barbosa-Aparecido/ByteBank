#include <iostream>
#include <string>

#include "Account.hpp"
#include "Holder.hpp"
#include "CheckingAccount.hpp"
#include "Manager.hpp"
#include "WeekDays.hpp"


using namespace std;

void showAccountBalance(const Account& account) {
	cout << "O saldo da conta do " << account.getHolder().getName() << " eh: R$ " << account.getBalance() << endl;
}

void makeWithdraw(Account& account) {
	std::variant<Account::WithdrawResult, float> result = account.toWithdraw(200);

	if (auto balance = std::get_if<float>(&result)) {
		cout << "Novo saldo da conta eh: R$ " << *balance << endl;
	}

}

void makeLogin(Autheticable& authenticable, string password) {
	if (authenticable.authenticate(password)) {
		cout << "Login realizado com sucesso!" << endl;
			return;
	}

	cout << "Senha inv�lida!" << endl;
}

template <typename T>
T& small(T& accountOne, T& accountTwo) {
    return accountOne < accountTwo ? accountOne : accountTwo;
}

ostream& operator<<(ostream& outputStream, const Account& account) {
	cout << "O saldo da conta do " << account.getHolder().getName() << " eh: R$ " << account.getBalance() << endl;

	return outputStream;
}

int main() {
    Cpf cpf = Cpf("123.456.789-10");

	CheckingAccount account("123456", Holder(cpf, "Pedro Augusto", "Uma Senha"));
	CheckingAccount otherAccount("123456", Holder(cpf, "Pedro Augusto", "Outra Senha"));

	account.deposit(1000);
	otherAccount.deposit(500);
	(Account&)otherAccount += 1000;

	account += otherAccount;

	makeWithdraw(otherAccount);

	account.transferTo(otherAccount, 200);

    cout << small<Account&>(account, otherAccount);

	//showAccountBalance(account);
	//showAccountBalance(otherAccount);

	cout << account << otherAccount << endl;

	cout << "Numero de contas criadas eh: " << Account::getNumberOfAccounts() << endl;

	Manager manager(Cpf("123.456.789-12"), "Pedro Augusto", 1000, "Uma senha", WeekDays::Thuesday);

	cout << "Nome do funcionario: " << manager.getName() << endl;

	return 0;
}
