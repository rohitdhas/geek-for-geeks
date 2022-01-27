// Problem - Sum of distinct elements (Basic)
// Link - https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements4801/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int findSum(int arr[], int n)
{
    sort(arr, arr + n);
    int sum = arr[0];

    for (int x = 1; x < n; x++)
    {
        if (arr[x] != arr[x - 1])
        {
            sum += arr[x];
        }
    }
    return sum;
}