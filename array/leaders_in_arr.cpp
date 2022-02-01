// Problem - Leaders in an array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> res;
    int max = a[n - 1];

    for (int x = n - 1; x >= 0; x--)
    {
        if (a[x] >= max)
        {
            res.push_back(a[x]);
            max = a[x];
        }
    }

    reverse(res.begin(), res.end());

    return res;
}