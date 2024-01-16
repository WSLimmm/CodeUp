#include <iostream>
using namespace std;

void printArr(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";

	cout << endl;
}

int main()
{
	int arr[1000];
	int n, input, temp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	for (int j = 0; j < n; j++)
	{
		printArr(arr, n);

		for (int k = 0; k < n - 1; k++)
		{
			temp = arr[k];
			arr[k] = arr[k + 1];
			arr[k + 1] = temp;
		}
	}

	return 0;
}