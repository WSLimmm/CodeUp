#include <iostream>
using namespace std;

int main()
{
	int n, input, arr[1000];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": ";

		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;

			if (arr[i] < arr[j])
				cout << "< ";
			else if (arr[i] == arr[j])
				cout << "= ";
			else
				cout << "> ";
		}
		cout << "\n";   
	} 

	return 0;
}