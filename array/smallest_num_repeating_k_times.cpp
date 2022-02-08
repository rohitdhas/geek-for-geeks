// Problem - Smallest number repeating K times (Basic)
// Link - https://practice.geeksforgeeks.org/problems/smallest-number-repeating-k-times3239/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int N, int K)
{
    unordered_map<int, int> obj;

    for (int x = 0; x < N; x++)
    {
        if (obj.find(arr[x]) == obj.end())
        {
            obj[arr[x]] = 1;
        }
        else
        {
            obj[arr[x]]++;
        }
    }

    int res = INT_MAX;

    for (auto x : obj)
    {
        if (x.second == K && x.first < res)
        {
            res = x.first;
        }
    }

    return res == INT_MAX ? -1 : res;
}