#pragma once
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class BankAccount
{
	static int nextID;
	string name;
	int accNum;
	string type;
	double balance, interestRate;

public:
	BankAccount(string name = "");

	int getAccNum() const;
	string getName() const;
	string getType() const;
	double getBalance() const;
	double getInterestRate() const;
	void setName(string n);
	void setType(string t);
	void setBalance(double b);
	void setInterestRate(double i);
	string withdraw(double amount);
	string desposit(double amount);
	string transfer(BankAccount &acc,double amount);
	friend ostream& operator<<(ostream& out, BankAccount &acc);
	~BankAccount();
};