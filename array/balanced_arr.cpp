// Problem - Balanced Array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/balanced-array07200720/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int minValueToBalance(int a[], int n)
{
    int leftSum = 0;
    int rightSum = 0;
    int half = n / 2;

    if (n % 2 != 0)
    {
        half++;
    }

    for (int x = 0; x < half; x++)
    {
        leftSum += a[x];
        rightSum += a[n - (x + 1)];
    }

    return abs(leftSum - rightSum);
}