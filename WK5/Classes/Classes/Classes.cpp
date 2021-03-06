#include <iostream>
#include <vector>
#include "cstdlib"
#include "time.h"
#include "Student.h"
#include "RomanNum.h"
#include "Day.h"
#include "Clock.h"
#include "Bank.h"

using std::cout;
using std::endl;
using std::vector;

int selectAccount(vector<BankAccount> &accs)
{
	for (BankAccount &acc : accs)
	{
		cout << acc;
	}
	cout << "Please select an Account" << endl;
	int selected;
	cin >> selected;
	return selected - 1;
}
int main()
{
	/*Student stud;
	Student stud2("Adrian" , 95, 'A');

	cout << stud;
	cout << stud2;

	cout << stud.getName() << " = " << stud.getGrade();*/

	/*RomanNum num("MXV");
	num.convert();*/

	/*Day day;
	day.printDay();
	cout << day.getDaysFromNow(1);*/

	/*Clock c1(8,30,50);
	Clock c2(10,15,55);
	cout << c1.getTimeDifference(c2);*/

	vector<BankAccount> accs(10);
	string fnames[] = { "Peter","Jhon","Will","Tony" };
	string lnames[] = { "Harvey","Bristola","Stark","Gargumell" };


	for (BankAccount acc : accs)
	{
		int fNamenum = rand() % 4;
		int lNamenum = rand() % 4;

		string name = fnames[fNamenum] + " - " + lnames[lNamenum];
		acc.setName(name);
		double balance = rand() % 1000+1;
		acc.desposit(balance);
		cout << acc.getName() << " " << acc.getAccNum() << endl;

	}
	int choice = 0;
		do
		{
			int selected = selectAccount(accs);
			BankAccount* to = nullptr;
			BankAccount &acc = accs[selected];
			cout << "1. Depsoit" << endl;
			cout << "2. Withdraw" << endl;
			cout << "3. Transfer" << endl;

			cin >> choice;
			double amount;
			switch (choice)
			{
			case 1:
				cout << "Amount: " << endl;
				cin >> amount;
				cout << acc.desposit(amount) << endl;
				break;
			case 2:
				cout << "Amount: " << endl;
				cin >> amount;
				cout << acc.withdraw(amount) << endl;
				break;
			case 3:
				to = &accs[selectAccount(accs)];
				cout << "Amount: " << endl;
				cin >> amount;
				cout << acc.transfer(*to,amount) << endl;
				break;
			case 4:
				break;
			default:
				cout << "Invalid Entry" << endl;
				break;

			}

		
		
		} while (choice != 4);

	
}