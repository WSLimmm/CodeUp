#include <iostream> 
using namespace std;

int a[10001];
int n, temp;

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;

        // �ּڰ��� ã�� ����
        for (int j = i + 1; j < n; j++) 
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }

        // �ּڰ��� ���ĵ��� ���� �������� ù ��° ��ġ�� �����Ϳ� ��ü
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        // ȸ������ �迭�� ���
        cout << i + 1 << "ȸ��: [ ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << "], �ּڰ�: " << a[i] << endl << endl;
    }

    cout << "���� ��: [ ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "]" << endl;

    return 0;
}