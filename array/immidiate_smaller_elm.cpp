// Problem - Immediate Smaller Element (Basic)
// Link - https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(int *arr, int n)
{

    for (int x = 0; x < n - 1; x++)
    {
        if (arr[x + 1] < arr[x])
        {
            arr[x] = arr[x + 1];
        }
        else
        {
            arr[x] = -1;
        }
    }

    arr[n - 1] = -1;
}