#include <iostream>
using namespace std;

int main()
{
	string input;
	int openCount = 0, closeCount = 0;
	cin >> input;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '(')
			openCount++;
		else if (input[i] == ')')
			closeCount++;
	}

	cout << openCount << " " << closeCount << endl;

	return 0;
}