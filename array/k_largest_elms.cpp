// Problem - k largest elements (Medium)
// Link - https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k)
{
    vector<int> result;
    sort(arr, (arr + n));

    for (int x = n - 1, y = 0; y < k; x--, y++)
    {
        result.push_back(arr[x]);
    }

    return result;
}