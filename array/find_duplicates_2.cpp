// Problem - Find duplicates in an array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
    sort(arr, arr + n);
    vector<int> res;
    int flag = -1;

    for (int x = 1; x < n; x++)
    {
        if (arr[x] == arr[x - 1] && flag != arr[x])
        {
            flag = arr[x];
            res.push_back(arr[x]);
        }
    }

    if (res.empty())
    {
        res.push_back(-1);
    }

    return res;
}