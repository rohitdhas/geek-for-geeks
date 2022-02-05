// Problem - Reverse array in groups (Basic)
// Link - https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

// Function to reverse every sub-array group of size k.
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    for (int x = 0; x < n; x += k)
    {
        reverse(arr.begin() + x, arr.begin() + ((x + k < n) ? x + k : n));
    }
}