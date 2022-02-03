// Problem - Cyclically rotate an array by one (Basic)
// Link - https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int lastItem = arr[n - 1];

    for (int x = n - 1; x > 0; x--)
    {
        arr[x] = arr[x - 1];
    }

    arr[0] = lastItem;
}