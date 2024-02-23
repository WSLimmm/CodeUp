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

        // 최솟값을 찾는 과정
        for (int j = i + 1; j < n; j++) 
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }

        // 최솟값을 정렬되지 않은 데이터의 첫 번째 위치의 데이터와 교체
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        // 회차마다 배열을 출력
        cout << i + 1 << "회차: [ ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";

        cout << "], 최솟값: " << a[i] << endl << endl;
    }

    cout << "정렬 후: [ ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "]" << endl;

    return 0;
}