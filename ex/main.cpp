#include <iostream>
using namespace std;

int divisor(int x, int y) {		// �ִ�����
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

	if (a < b) // a�� b���� ������� a�� b�� ���� �ٲ۴�.
	{
		temp = a;
		a = b;
		b = temp;
	}

	div = divisor(a, b);

	cout << "a�� ��: " << a << " b�� ��: " << b << endl;
	cout << div;

	return 0;
}