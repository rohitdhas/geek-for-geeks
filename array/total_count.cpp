// Problem - Total count (Basic)
// Link - https://practice.geeksforgeeks.org/problems/total-count2415/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int totalCount(int arr[], int n, int k)
{
    int count = 0;

    for (int x = 0; x < n; x++)
    {
        if (arr[x] % k == 0)
        {
            count += arr[x] / k;
        }
        else
        {
            count += (arr[x] / k) + 1;
        }
    }

    return count;
}