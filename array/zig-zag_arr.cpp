// Problem - Convert array into Zig-Zag fashion  (Basic)
// Link - https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void zigZag(int arr[], int n)
{
    for (int x = 1; x < n; x += 2)
    {
        if (arr[x] < arr[x - 1])
            swap(arr[x], arr[x - 1]);
        if (x + 1 >= n)
            break;
        if (arr[x] < arr[x + 1])
            swap(arr[x], arr[x + 1]);
    }
}