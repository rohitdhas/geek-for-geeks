// Problem - Sum Array Puzzle (Basic)
// Link - https://practice.geeksforgeeks.org/problems/sum-array-puzzle/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void SumArray(int arr[], int n)
{
    int tempArr[n] = {0};

    for (int x = 0; x < n; x++)
    {
        int sum = 0;

        for (int y = 0; y < n; y++)
        {
            if (y != x)
            {
                sum += arr[y];
            }
        }

        tempArr[x] = sum;
    }

    for (int x = 0; x < n; x++)
    {
        arr[x] = tempArr[x];
    }
}