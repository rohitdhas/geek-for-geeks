// Problem - Minimize the sum of product (Basic)
// Link - https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long int minValue(int a[], int b[], int n)
{
    long long int sum = 0;

    sort(a, (a + n), greater<int>());
    sort(b, (b + n));

    for (int x = 0; x < n; x++)
    {
        sum += (a[x] * b[x]);
    }

    return sum;
}