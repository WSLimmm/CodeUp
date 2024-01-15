#include <iostream>
using namespace std;

int main()
{
	int n, input;
	cin >> n;

	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}   
	 
	for (int j = n - 1; j >= 0; j--)
		cout << arr[j] << " ";
	
	return 0;
}