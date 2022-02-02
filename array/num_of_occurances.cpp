// Problem - Number of occurrence (Basic)
// Link - https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int x)
{
    int count = 0;

    for (int y = 0; y < n; y++)
    {
        if (arr[y] == x)
        {
            count++;
        }
    }

    return count;
}

// NOTE - It's an unoptimized solution. This works in O(n),
// but Expected time complexity for this problem is O(LogN).