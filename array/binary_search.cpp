// Problem - Binary Search (Basic)
// Link - https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int left = 0, right = n - 1;
    int mid = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] == k)
        {
            return mid;
        }
    }

    return -1;
}