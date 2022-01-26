// Problem - Alternative Sorting (Basic)
// Link - https://practice.geeksforgeeks.org/problems/alternative-sorting1311/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int minimum_apple(int arr[], int n)
{
    sort(arr, arr + n);
    int min = 1;

    for (int x = 1; x < n; x++)
    {
        if (arr[x] != arr[x - 1])
        {
            min++;
        }
    }

    return min;
}
