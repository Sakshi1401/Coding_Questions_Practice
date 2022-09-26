#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1, sum = 0;
    cout << "\nEnter the limit of the series....";
    cin >> n;
    cout << "\nThe fibonacci series is:-\n";
    cout << a << "\t" << b << "\t";
    for (int i = 2; i < n; ++i)
    {
        sum = a + b;
        cout << sum << "\t";
        a = b;
        b = sum;
    }

    return 0;
}
