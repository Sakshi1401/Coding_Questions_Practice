/*   Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.  */

#include <iostream>
using namespace std;
int main()
{
    int target, i, n;
    cout << "enter the value of target:";
    cin >> target;
    cout << "Enter the length of array:";
    cin >> n;

    int A[n];
    cout << "Enter the array:";
    for (i = 0; i < n; i++)
        cin >> A[i];

for(i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(A[i]+A[j]==target)
        cout<<"Numbers at indexes"<<" [ "<<i+1<<" , "<<j+1<<" ] "<<" gives the the target sum."<<endl;
    }
}

    return 0;
}