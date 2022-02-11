// Problem - Rotate Array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int d, int n)
{
    vector<int> temp(d);

    for (int x = 0, y = 0; x < n; x++)
    {
        if (x < d)
        {
            temp[x] = arr[x];
        }

        if (x >= n - d)
        {
            arr[x] = temp[y++];
        }
        else
        {
            arr[x] = arr[x + d];
        }
    }
}