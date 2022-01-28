// Problem - Rearrange the array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/rearrange-the-array5802/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void rearrangeArray(int arr[], int n)
{
    sort(arr, (arr + n));
    vector<int> res;

    for (int x = 0; x <= int(n / 2); x++)
    {
        res.push_back(arr[x]);
        res.push_back(arr[n - (x + 1)]);
    }

    for (int x = 0; x < n; x++)
    {
        arr[x] = res[x];
    }
}