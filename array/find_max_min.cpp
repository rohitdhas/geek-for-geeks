// Problem - Find minimum and maximum element in an array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> res;

    long long max = 0;
    long long min = INT_MAX;

    for (int x = 0; x < n; x++)
    {
        if (a[x] > max)
        {
            max = a[x];
        }

        if (a[x] < min)
        {
            min = a[x];
        }
    }
    res.first = min;
    res.second = max;

    return res;
}