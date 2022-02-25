// Problem - Subarray with given sum (Easy)
// Link - https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    long long sum = arr[0];
    int x = 0, y = 0;

    while (x < n && y < n)
    {
        if (sum == s)
        {
            return {x + 1, y + 1};
        }
        else if (sum < s)
        {
            y++;
            sum += arr[y];
        }
        else if (sum > s)
        {
            sum -= arr[x];
            x++;
        }
    }

    return {-1};
}