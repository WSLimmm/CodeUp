#include <iostream>
using namespace std;

int divisor(int x, int y) {		// 최대공약수
	int z = x % y;

	while (z != 0) {
		x = y;
		y = z;
		z = x % y;
	}
	return y;
}

int main() {
	int a, b, div, temp;
	cin >> a >> b;

	if (a < b) // a가 b보다 작을경우 a와 b의 값을 바꾼다.
	{
		temp = a;
		a = b;
		b = temp;
	}

	div = divisor(a, b);

	cout << "a의 값: " << a << " b의 값: " << b << endl;
	cout << div;

	return 0;
}