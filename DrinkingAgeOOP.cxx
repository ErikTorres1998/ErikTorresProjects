#include <iostream>
using namespace std;
class Data
{
  private:
	int age = 0;

  public:
	void askAge()
	{
		cout << "Enter your age: " << endl;
		cin >> age;
		subtractAge();
	}
	void subtractAge()
	{
		if (21 > age)
			age = 21 - age;
		decideAge();
	}
	void decideAge()
	{
		if (21 <= age)
			cout << "You are old enough to drink your age is " << age << endl;
		else if (21 > age)
			cout << "In the State of Texas you are not allowed to drink yet you need " << age << " more years of age until you are able to drink..." << endl;
	}
};
int main()
{
	Data obj1;
	obj1.askAge();
}
// Code Written By ERIK TORRES
// Email :  e.torres5732@student.tsu.edu
