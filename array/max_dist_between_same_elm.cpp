// Problem - Max distance between same elements (Easy)
// Link - https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1

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