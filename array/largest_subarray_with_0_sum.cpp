// Problem - Largest subarray with 0 sum (Easy)
// Link - https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    int psum = 0, len = 0;
    unordered_map<int, int> obj;

    for (int x = 0; x < n; x++)
    {
        psum += A[x];

        if (psum == 0)
        {
            len = max(len, x + 1);
        }

        if (obj.find(psum) != obj.end())
        {
            len = max(len, x - obj[psum]);
        }
        else
        {
            obj[psum] = x;
        }
    }

    return len;
}