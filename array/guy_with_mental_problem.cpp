// Problem - A guy with a mental problem (Basic)
// Link - https://practice.geeksforgeeks.org/problems/a-guy-with-a-mental-problem1604/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long minTime(long long a[], long long b[], long long n)
{
    long long aSum = 0;
    long long bSum = 0;

    if (n % 2 != 0)
    {
        aSum += a[n - 1];
        bSum += b[n - 1];
    }

    for (int x = 0; x < n - 1; x++)
    {
        if (x % 2 == 0)
        {
            aSum += a[x] + b[x + 1];
            bSum += b[x] + a[x + 1];
        }
    }

    return aSum < bSum ? aSum : bSum;
}