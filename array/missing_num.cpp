// Problem - Missing number in array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    sort(array.begin(), array.end());

    if (n == 2)
    {
        if (array[0] > 1)
        {
            return array[0] - 1;
        }
    }

    for (int x = 0; x < n - 1; x++)
    {
        if (array[x] != x + 1)
        {
            return array[x] - 1;
        }
    }

    return array[n - 2] + 1;
}