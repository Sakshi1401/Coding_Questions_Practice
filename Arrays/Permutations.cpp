/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

**Using backtracking to solve this.

We have given the nums array, so we will declare an ans vector of vector that will store all the permutations.

Call a recursive function that starts with zero, nums array, and ans vector.

Declare a map and initialize it to zero and call the recursive function

**Base condition:

Whenever the index reaches the end take the nums array and put it in ans vector and return.

**Recursion:

Go from index to n – 1 and swap. Once the swap has been done call recursion for the next state.After coming back from the recursion make sure you
re-swap it because for the next element the swap will not take place.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        recurPermute(index + 1, nums, ans);
        swap(nums[index], nums[i]);
    }
}

int main()
{
    vector<int> v;
    int a, n;

    cout << "\nEnter the size of the array:";
    cin >> n;

    cout << "\nEnter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    vector<vector<int>> ans;
    recurPermute(0, v, ans);
    cout << "All Permutations are" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}