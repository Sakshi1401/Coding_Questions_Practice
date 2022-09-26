//For Strings:

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
	// first append Y at the end of X
	string XY = X.append(Y);

	// then append X at the end of Y
	string YX = Y.append(X);

	// Now see which of the two
	// formed numbers is greater
	return XY.compare(YX) > 0 ? 1 : 0;
}

void printLargest(vector<string> arr)
{
	sort(arr.begin(), arr.end(), myCompare);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
}

int main()
{
	vector<string> arr;

	arr.push_back("ABC");
	arr.push_back("def");
	arr.push_back("bcd");
	arr.push_back("ref");
	printLargest(arr);

	return 0;
}

/*

For numbers: 

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

bool myCompare(int x, int y)
{

	int xy = x, yx = y;

	// Count length of x and y
	int countx = 0, county = 0;

	// Count length of X
	while (x > 0) {
		countx++;
		x /= 10;
	}

	// Count length of Y
	while (y > 0) {
		county++;
		y /= 10;
	}

	x = xy;
	y = yx;

	while (countx--)
		yx *= 10;

	while (county--)
		xy *= 10;

	// Append x to y
	yx += x;

	// Append y to x
	xy += y;

	return xy > yx;
}

void printLargest(vector<ll> arr)
{

	sort(arr.begin(), arr.end(), myCompare);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
}

// Driver code
int main()
{
	vector<ll> arr;

	// Output should be 6054854654
	arr.push_back(54);
	arr.push_back(546);
	arr.push_back(548);
	arr.push_back(60);
	printLargest(arr);

	return 0;
}
*/