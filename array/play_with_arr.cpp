// Problem - Play with an array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/play-with-an-array/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

vector<int> formatArray(vector<int> a, int n)
{
    for (int x = 0; x < n; x++)
    {
        if (x % 2 != 0 && a[x] < a[x - 1])
        {
            int temp = a[x];
            a[x] = a[x - 1];
            a[x - 1] = temp;
        }
    }

    return a;
}