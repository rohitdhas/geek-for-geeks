// Problem - Missing number in shuffled array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/missing-number-in-shuffled-array0938/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long findMissing(long long a[], long long b[], int n)
{
    sort(a, (a + n));
    sort(b, (b + (n - 1)));

    for (int x = 0; x < n; x++)
    {
        if (a[x] != b[x])
        {
            return a[x];
        }
    }
}