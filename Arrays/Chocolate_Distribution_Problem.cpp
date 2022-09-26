/*
Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
Examples:

Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3
Output: Minimum Difference is 2
Explanation:
We have seven packets of chocolates and we need to pick three packets for 3 students
If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5
Output: Minimum Difference is 6
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, N, m, diff, min_diff = INT16_MAX;
    cout << "\nEnter the size of array:";
    cin >> N;

    vector<int> arr;

    cout << "\nEnter the array:";
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "\nEnter m:";
    cin >> m;

    sort(arr.begin(), arr.end());

    for (int i = 0; i + m - 1 < N; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    cout << "\nMinimum difference: " << min_diff << endl;
    return 0;
}