// Problem - Repeated IDs (Basic)
// Link - https://practice.geeksforgeeks.org/problems/repeated-ids0116/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueId(int a[], int n)
{

    vector<int> result;

    for (int x = 0; x < n; x++)
    {
        auto itr = find(result.begin(), result.end(), a[x]);
        if (itr == result.end())
        {
            result.push_back(a[x]);
        }
    }
    return result;
}