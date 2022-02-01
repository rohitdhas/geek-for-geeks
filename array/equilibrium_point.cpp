// Problem - Equilibrium Point (Easy)
// Link - https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=2&query=category[]Arraysdifficulty[]0page2category[]Arrays

#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
    if (n == 1)
        return 1;

    long long leftSum = 0;
    long long rightSum = 0;

    for (int x = 0; x < n; x++)
    {
        leftSum += a[x];
    }

    leftSum -= a[0];

    for (int x = 1; x < n - 1; x++)
    {
        rightSum += a[x - 1];
        leftSum -= a[x];

        if (rightSum == leftSum)
            return x + 1;
    }

    return -1;
}