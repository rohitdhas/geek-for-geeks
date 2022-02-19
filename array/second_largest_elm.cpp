// Problem - Find second largest element (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-second-largest-element2406/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int arr_size)
{
    sort(arr, arr + arr_size);

    for (int x = arr_size - 2; x >= 0; x--)
    {
        if (arr[x] < arr[arr_size - 1])
        {
            return arr[x];
        }
    }

    return -1;
}