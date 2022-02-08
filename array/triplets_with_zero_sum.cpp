// Problem - Find triplets with zero sum (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

bool findTriplets(int arr[], int n)
{
    if (n < 3)
    {
        return false;
    }

    sort(arr, (arr + n));

    for (int x = 0; x < n; x++)
    {
        int left = x + 1, right = n - 1;

        while (left < right)
        {
            int val = arr[x] + arr[left] + arr[right];

            if (val == 0)
            {
                return true;
            }
            else if (val < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return false;
}