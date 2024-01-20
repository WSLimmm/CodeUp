#include <iostream>
using namespace std;

int arr[10000001] = { 0 };

int main()
{
	int n, m, input;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[input] = 1;
	}

	cin >> m;
	for (int j = 0; j < m; j++)
	{
		cin >> input;
		cout << arr[input] << " ";
	}

	return 0;
}