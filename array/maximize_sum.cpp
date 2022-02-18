// Problem - Maximize sum(arr[i]*i) of an Array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int Maximize(int a[], int n)
{
    sort(a, a + n);
    long long int res = 0;
    long long int mod = 1e9 + 7;

    for (long long int x = 0; x < n; x++)
    {
        res += (a[x] * x) % mod;
    }

    return res % mod;
}