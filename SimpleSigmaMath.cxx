#include <iostream>
#include <math.h>
// Sigma Math.  index  i=0, last value of i=4, Exp = i^2
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i <= 4; i++)
	{
		int Exp = pow(i, 2);
		sum = sum + Exp;
	}
	cout << sum << endl;
}
//Code Written By ERIK TORRES
// Email :  e.torres5732@student.tsu.edu