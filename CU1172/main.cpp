#include <iostream>
using namespace std;

int main()
{
	int arr[3], input;

	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	int temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < 3; k++)
		cout << arr[k] << " ";

	return 0;
}