#include <iostream>
#include <iomanip>
using namespace std;
double payment(double z);
double ExtraCharges(double x);
double menu();
void on(string x);
int main()
{
	for (;;)
	{
		string a;
		cin >> a;
		on(a);
	}
}
void on(string x)
{
	if (x == "on" || x == "ON")
	{
		cout << "Machine is ON" << endl;
		menu();
	}
	else
	{
		cout << "Machine if OFF please type ON" << endl;
		main();
	}
}
double menu()
{
	cout << "Menu Vending Machine \n"
		 << endl;
	cout << "1. Coke $ 0.95 \n";
	cout << "2. Doritos $ 0.75 \n";
	cout << "3. Snickers $ 0.55 \n";
	cout << "4. Chex Mix $ 0.60 \n";
	cout << "5. Pepsi $ 0.90 \n";
	double select;
	cout << " Select your snack \n";
	cin >> select;
	cout << endl;

	if (select == 1)
	{
		cout << " you selected coke \n";
		select = 0.95;
	}
	else if (select == 2)
	{
		cout << " you selected doritos \n";
		select = 0.75;
	}
	else if (select == 3)
	{
		cout << " you selected snickees \n";
		select = 0.55;
	}
	else if (select == 4)
	{
		cout << " you selected chex mis \n";
		select = 0.60;
	}
	else if (select == 5)
	{
		cout << " you selected pepsi \n";
		select = 0.90;
	}
	else
	{
		cout << "ERROR \n";
	}
	cout << fixed << setprecision(2) << select << endl;
	ExtraCharges(select);
	return select;
}
double ExtraCharges(double x)
{
	double p, FinalPrice;

	p = x * .65;
	FinalPrice = x + p;

	cout << "Extra Charges are \n";
	cout << "36% Tax Fee\n";
	cout << "25% Labor  Fee\n";
	cout << "5 % Overhead Fee \n";
	cout << endl;
	payment(FinalPrice);
	return FinalPrice;
}
double payment(double z)
{
	double pay;
	double changedue = 0.0;
	int buck5, buck1 = 0;
	int change1 = 0;
	int dollar = 0;
	int quarters = 0;
	int dimes = 0;
	int nickles = 0;
	int pennies = 0;

	cout << " Your total is " << z << endl;

	cout << "Please pay in Quaters , Dimes , Nickes  and $1 bills and $5 bills \n";

	cout << "Enter the number of 5 Dollar bills\n ";
	cin >> buck5;
	cout << "Enter the number of 1 Dollar bills\n ";
	cin >> buck1;
	cout << "Enter the number of quarters \n";
	cin >> quarters;
	cout << "Enter the number of dimes \n";
	cin >> dimes;
	cout << "Enter the number of nickles \n";
	cin >> nickles;
	cout << "Enter the number of pennies\n";
	cin >> pennies;

	pay = (buck5 * 5) + (buck1 * 1) + (quarters * .25) + (dimes * .10) + (nickles * .5) + (pennies * .01);

	cout << "you have this amount: " << pay << endl;

	cout << "your total is  " << z << endl;

	if (z > pay)
	{
		cout << " not enugh \n";
		cout << endl;
		cout << endl;
	}
	else
	{
		cout << fixed << setprecision(2);
		changedue = pay - z;
		change1 = changedue * 100;
		dollar = change1 / 100;
		quarters = change1 % 100 / 25;
		dimes = change1 % 100 / 25 / 10;
		nickles = change1 % 100 % 25 % 10 / 5;
		pennies = change1 % 100 % 25 % 10 % 5 / 1;
		cout << "change due :   $ " << changedue << endl;

		cout << "Dollars :    " << dollar << endl;
		cout << "Quarters:   " << quarters << endl;
		cout << "Dimes    " << dimes << endl;
		cout << "Nickles   " << nickles << endl;
		cout << "Pennies   " << pennies << endl;
		cout << endl;
		cout << endl;
	}
	return z;
	// Code Written By ERIK TORRES 
	// Email :  e.torres5732@student.tsu.edu
}