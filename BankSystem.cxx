#include <iostream>
using namespace std;
class Bank
{
  private:
	float balance = 0;

  public:
	Bank()
	{
		cout << "Welcome to The Bank of Torres" << endl;
	}
	void selectMenu()
	{
		int choice;
		cout << "1. View Account Balance\n";
		cout << "2. Deposit\n";
		cout << "3. Withdraw\n";
		cout << "4. Exit Bank\n";
		cin >> choice;

		if (choice == 1)
			viewBalance();
		else if (choice == 2)
			depositMoney();
		else if (choice == 3)
			withdrawMoney();
		else if (choice == 4)
			exit(0);
		else
			cerr << "Invalid input\n";
	}
	void viewBalance()
	{
		cout << "Available Account Balance is: "
			 << "$" << balance << endl;
		cout << endl;
		selectMenu();
	}
	void depositMoney()
	{
		cout << "Enter the amount you want to deposit: \n";
		float deposit;
		cin >> deposit;
		balance = balance + deposit;
		cout << "You deposited $" << deposit << " into your account." << endl;
		cout << endl;
		selectMenu();
	}
	void withdrawMoney()
	{
		cout << "Enter the amount you want to withdraw: \n";
		float withdraw;
		cin >> withdraw;
		balance = balance - withdraw;
		cout << "You withdrew $" << withdraw << " from your account." << endl;
		cout << endl;
		selectMenu();
	}
};
int main()
{
	Bank *account1 = new Bank;
	account1->selectMenu();
	delete account1;
 	// Code Written By ERIK TORRES
   // Email :  e.torres5732@student.tsu.edu
}