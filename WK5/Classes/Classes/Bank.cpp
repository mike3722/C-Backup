#include "Bank.h"
#include <ostream>
using std::string;
using std::to_string;
using std::ostream;
using std::endl;


int BankAccount::nextID = 1;

BankAccount::BankAccount(string name)
{
	accNum = nextID;
	nextID++;
}

int BankAccount::getAccNum() const
{
	return accNum;
}
string BankAccount::getName() const
{
	return name;
}
string BankAccount::getType() const
{
	return type;
}
double BankAccount::getBalance() const
{
	return balance;
}
double BankAccount::getInterestRate() const
{
	return interestRate;
}

void BankAccount::setName(string n)
{
	name = n;
}
void BankAccount::setType(string t)
{
	type = t;
}
void BankAccount::setBalance(double b)
{
	balance = b;
}
void BankAccount::setInterestRate(double i)
{
	interestRate = i;
}

string BankAccount::withdraw(double amount)
{
	if (balance <= amount) 
	{
		return "Withdraw Successfull. Your New Balance = " + to_string(balance);
	}

}
string BankAccount::desposit(double amount)
{
	if (balance == amount)
	{
		return "Deposit Successfull. Your New Balance = " + to_string(balance);
	}
}
string BankAccount::transfer(BankAccount &acc, double amount)
{
	if (balance >= amount) 
	{
		balance -= amount;
		acc.balance += amount;
		return "Transfer Complete";
	}
	return "Transfer Failed";
}
ostream& operator<<(ostream& out, BankAccount &acc)
{
	out << acc.getAccNum << "\t" << acc.getName << "\n $" << acc.getBalance() <<  endl;
	return out;
}



BankAccount::~BankAccount()
{

}





