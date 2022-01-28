// Problem - Wave Array (Easy)
// Link - https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void convertToWave(vector<int> &arr, int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        if (x % 2 == 0)
        {
            int temp = arr[x];
            arr[x] = arr[x + 1];
            arr[x + 1] = temp;
        }
    }
}