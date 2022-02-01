// Problem - Bitonic Point (Easy)
// Link - https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n)
{
    int max = 0;
    int half = n / 2;

    if (n % 2 != 0)
    {
        half++;
    }

    for (int x = 0; x <= half; x++)
    {
        int left = arr[x];
        int right = arr[n - (x + 1)];

        if (left > max)
        {
            max = left;
        }

        if (right > max)
        {
            max = right;
        }
    }

    return max;
}