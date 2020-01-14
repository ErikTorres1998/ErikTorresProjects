#include <fstream>
#include <iostream>
#include <regex>
#include <string>
#include <cstdlib> // for exit()

int main()
{
	using namespace std;

	string search;
	cout << "Enter Text To Search\n";
	cin >> search;
	ifstream inf("TextFile.txt");

	if (!inf)
	{
		cerr << "ERROR could not open file!" << endl;
		exit(1);
	}

	int matchCount = 0;
	regex r(search);

	smatch m;

	while (inf)
	{
		std::string s;
		inf >> s;

		while (regex_search(s, m, r))
		{
			matchCount++;
			s = m.suffix().str();
		}
		cout << matchCount << " matches found:" << endl;
	}

	return 0;
}