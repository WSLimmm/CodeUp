#include <iostream>
using namespace std;

int a[10001];
int n, i, j, temp, key;

int main() 
{
    cin >> n;

    for (i = 1; i <= n; i++)
        cin >> a[i];

    for (i = 2; i <= n; i++)
    {
        key = a[i];
        
        for (j = i - 1; j >= 1 && a[j] >= key; j--)
        {
            a[j + 1] = a[j];
        }

        a[j + 1] = key;
    }

    for (i = 1; i <= n; i++)
        cout << a[i] << endl;

    return 0;
}