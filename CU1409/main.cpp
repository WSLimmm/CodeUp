#include <iostream>
using namespace std;

int main()
{
	int arr[10], input;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	cin >> input;
	cout << arr[input - 1] << endl;

	return 0;
}