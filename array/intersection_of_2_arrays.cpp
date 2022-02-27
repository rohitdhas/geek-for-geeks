// Problem - Intersection of two arrays (Easy)
// Link - https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

#include <bits/stdc++.h>
using namespace std;

int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    unordered_map<int, int> obj;

    for (int x = 0; x < n; x++)
    {
        if (obj.find(a[x]) == obj.end())
        {
            obj[a[x]]++;
        }
    }

    for (int x = 0; x < m; x++)
    {
        if (obj.find(b[x]) != obj.end())
        {
            obj[b[x]]++;
        }
    }

    int count = 0;
    for (auto it : obj)
    {
        if (it.second > 1)
        {
            count++;
        }
    }

    return count;
}