/*
Algorithm :

1. Traverse the array from end and find the first index, idx such that A[i] < A[i + 1].
2. Again traverse the array from the end and find the first index, ind such that A[i] > A[idx].
3. Swap A[idx] and A[ind].
4. Reverse the array from idx + 1 till N.
5. The base case would be, if the array is in decreasing order, no next permutation will be found, hence return the array in sorted order.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
        {
            break;
        }
    }
    if (k < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])
            {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
    cout << "\nNext permutation is:\n";
    for (int i = 0; i < n; i++)
        cout << nums[i];
}

int main()
{
    int a, size;
    vector<int> v;

    cout << "Enter the size of the array:";
    cin >> size;

    cout << "\nEnter the array elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    nextPermutation(v);

    return 0;
}