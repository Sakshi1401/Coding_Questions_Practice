// Approach 1

#include <iostream>

using namespace std;

int main()
{
    int n, k, i, temp = 0;

    cout << "Enter the size of the array:- ";
    cin >> n;

    int nums[n];

    cout << "Enter the elements of the array:- ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "\nEnter the number of rotations to be done:";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            int temp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = temp;
        }
    }

    for (i = 0; i < n; i++)
        cout << nums[i] << " ";
    return 0;
}

/*Approach 2:
This is the most optimized approach.
Algorithm for this approach works as below:

Reverse whole array.
Reverse first k elements
Reverse rest n-k elements.
For example:
let’s say Array is {1,2,3,4,5,6,7,8}
You want to rotate by k position.
It will work as below:
You rotate the whole array. So array became: {8,7,6,5,4,3,2,1}
Reverse first k elements, so array became : {7,8,6,5,4,3,2,1}
Reverse rest of elements, so array became  : {7,8,1,2,3,4,5,6}
*/

/*

public static int[] rotateOptimized(int[] nums,int k)
    {
        int n=nums.length;
        if(k > n)
            k=k%n;
        nums=reverse(nums,0,n-1);
        nums=reverse(nums,0,k-1);
        nums=reverse(nums,k,n-1);
        return nums;
    }
    public static int[] reverse(int[] nums,int start,int end)
    {

        while (start <= end ) {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
        return nums;
    }

*/