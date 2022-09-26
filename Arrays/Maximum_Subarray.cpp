#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4};
    int a, maxsum = INT_FAST16_MIN;
    vector<int>::iterator it;

    // cout << "Enter the array: ";
    // for (it = v.begin();it!=v.end(); it++)
    // {
    //     cin >> a;
    //     if (a == '\n')
    //         break;
    //     v.push_back(a);

    // }

    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << v[k] << " ";
                sum += v[k];
            }
            cout << endl;
            maxsum = max(maxsum, sum);
        }
    }
    cout << "Maximum sum= " << maxsum;
    return 0;
}