#include <iostream>
using namespace std;

int main()
{
	int N, C, input, arr[99];

	cin >> N >> C;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	for (int j = 0; j < N; j++)
	{
		int temp, min = 999, minIndex;
		for (int k = j; k < N; k++)
		{
			if (arr[k] <= min)
			{
				min = arr[k];
				minIndex = k;
			}
		}

		temp = arr[j];
		arr[j] = arr[minIndex];
		arr[minIndex] = temp;
	}

	int count = 1;
	for (int x = 0; x < N; x++)
	{
		cout << arr[x] << " ";

		if (count % C == 0)
			cout << "\n";

		count++;
	}

	return 0;
}