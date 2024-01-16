#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int k, input;

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	for (int j = 0; j <= 1; j++)
	{
		for (int z = 0; z < k; z++)
		{
			cout << arr[z] << endl;
		}
	}

	return 0;
}