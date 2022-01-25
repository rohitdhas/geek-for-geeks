// Problem - Greater on Right Side (Basic)
// Link - https://practice.geeksforgeeks.org/problems/greater-on-right-side4305/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n)
	{
		int curMax = -1;

		for (int x = n - 1; x >= 0; x--)
		{
			if (arr[x] > curMax)
			{
				int temp = arr[x];
				arr[x] = curMax;
				curMax = temp;
			}
			else
			{
				arr[x] = curMax;
			}
		}
	}
};

int main()
{
	int n = 6;
	int arr[n] = {16, 17, 4, 3, 5, 2};

	Solution test;
	test.nextGreatest(arr, n);
	// Output: 17 5 5 5 2 -1

	return 0;
}
