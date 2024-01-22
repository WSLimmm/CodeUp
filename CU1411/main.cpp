#include <iostream>
using namespace std;

int main()
{
	int N, input, arr[50] = { 0 };

	cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> input;
		arr[input - 1] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0)
			cout << i + 1;
	}

	return 0;
}