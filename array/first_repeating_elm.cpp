// Problem - First Repeating Element (Easy)
// Link - https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n)
{
    unordered_map<int, int> obj;
    int idx = INT_MAX;

    for (int x = 0; x < n; x++)
    {
        if (obj.find(arr[x]) == obj.end())
        {
            obj[arr[x]] = x + 1;
        }
        else
        {
            if (obj[arr[x]] < idx)
            {
                idx = obj[arr[x]];
            }
        }
    }
    return idx == INT_MAX ? -1 : idx;
}