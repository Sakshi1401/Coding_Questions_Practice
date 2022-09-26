#include <iostream>

using namespace std;

int main()
{
    int n, temp, r, sum = 0;
    cout << "\nEnter the number:";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (sum == temp)
        cout << "\n..........Number entered is Armstrong........\n";
    else
        cout << "\n..........Number entered is not Armstrong......\n";

    return 0;
}
