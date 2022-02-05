// Problem - Peak element (Easy)
// Link - https://practice.geeksforgeeks.org/problems/peak-element/1

#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    int max = 0;
    int idx = -1;
    int half = n / 2;

    if (n % 2 != 0)
    {
        half++;
    }

    for (int x = 0; x < half; x++)
    {
        if (arr[x] > max)
        {
            max = arr[x];
            idx = x;
        }

        if (arr[n - (x + 1)] > max)
        {
            max = arr[n - (x + 1)];
            idx = n - (x + 1);
        }
    }

    return idx;
}