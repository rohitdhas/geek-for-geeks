// Problem - Find the smallest and second smallest element in an array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n)
{
    vector<int> res(2);
    sort(a, a + n);

    res[0] = a[0];
    for (int x = 1; x < n; x++)
    {
        if (a[x] > a[x - 1])
        {
            res[1] = a[x];
            return res;
        }
    }

    res[0] = -1;
    return res;
}