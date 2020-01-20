#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int Points = 0;
int CheckAnswer(int answer, int user_answer);
int main()
{
	int num1, num2, answer, user_answer;
	srand(time(0));
	num1 = (rand() % 12);
	num2 = (rand() % 12);

	cout << "How much is  " << num1 << "x" << num2 << endl;

	answer = num1 * num2;
	cin >> user_answer;
	CheckAnswer(answer, user_answer);
}
int CheckAnswer(int answer, int user_answer)
{
	if (answer == user_answer)
	{
		cout << "Correct!" << endl;
		Points += 25;
		cout << "POINTS " << Points << endl;
		main();
	}
	else
	{
		cout << "Wrong!" << endl;
		Points -= 25;
		cout << "POINTS " << Points << endl;
		main();
	}
}
// Code Written By ERIK TORRES
// Email :  e.torres5732@student.tsu.edu