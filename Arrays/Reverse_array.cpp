#include <iostream>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

int main()
{
	int arr[100],n;
	
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	printArray(arr, n);
	
	rvereseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	printArray(arr, n);
	
	return 0;
}
