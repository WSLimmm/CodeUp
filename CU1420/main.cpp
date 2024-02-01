#include <iostream>
using namespace std;

int main()
{
	string name, arrStr[50], tempStr;
	int arrInt[50], n, score, tempInt;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> score;
		arrStr[i] = name;
		arrInt[i] = score;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arrInt[j] < arrInt[j + 1])
			{
				tempInt = arrInt[j];
				arrInt[j] = arrInt[j + 1];
				arrInt[j + 1] = tempInt;

				tempStr = arrStr[j];
				arrStr[j] = arrStr[j + 1];
				arrStr[j + 1] = tempStr;
			}
		}
	}

	cout << arrStr[2];

	return 0;
}