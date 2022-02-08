// Problem - Sort in specific order (Basic)
// Link - https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void sortIt(long long arr[], long long n)
{
    vector<long long> odds;
    vector<long long> evens;

    for (int x = 0; x < n; x++)
    {
        if (arr[x] % 2 == 0)
        {
            evens.push_back(arr[x]);
        }
        else
        {
            odds.push_back(arr[x]);
        }
    }

    sort(odds.begin(), odds.end(), greater<int>());
    sort(evens.begin(), evens.end());

    for (int x = 0, y = 0, z = 0; x < n; x++)
    {
        if (x <= odds.size() - 1)
        {
            arr[x] = odds[y];
            y++;
        }
        else
        {
            arr[x] = evens[z];
            z++;
        }
    }
}