#include <iostream>
using namespace std;
class data
{
  public:
	void askAge()
	{
		int age = 0;
		cout << "Enter your age: " << endl;
		cin >> age;
		subtractAge(age);
	}
	void subtractAge(int age)
	{
		if (21 > age)
			age = 21 - age;
		decideAge(age);
	}
	void decideAge(int age)
	{
		if (21 <= age)
			cout << "You are old enough to drink your age is " << age << endl;
		else if (21 > age)
			cout << "In the State of Texas you are not allowed to drink yet you need " << age << " more years of age until you are able to drink..." << endl;
	}
};
int main()
{
	data obj1;
	obj1.askAge();
}
// Code Written By ERIK TORRES
// Email :  e.torres5732@student.tsu.edu
