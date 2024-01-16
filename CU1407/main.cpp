#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	input.erase(remove(input.begin(), input.end(), ' '), input.end());
	cout << input;

	return 0;
}