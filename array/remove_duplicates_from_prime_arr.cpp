// Problem - Remove duplicates in small prime array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1/?page=4&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int n)
{
    vector<int> res;
    unordered_map<int, int> obj;

    for (int x = 0; x < n; x++)
    {
        if (obj.find(arr[x]) == obj.end())
        {
            obj[arr[x]] = 1;
            res.push_back(arr[x]);
        }
    }

    return res;
}