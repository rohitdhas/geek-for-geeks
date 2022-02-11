// Problem - Balanced Array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/balanced-array07200720/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n)
{
    unordered_map<int, int> obj;
    int max = 0;

    for (int x = 0; x < n; x++)
    {
        if (obj.find(arr[x]) == obj.end())
        {
            obj[arr[x]] = x;
        }
        else
        {
            if (x - obj[arr[x]] > max)
            {
                max = x - obj[arr[x]];
            }
        }
    }

    return max;
}