// Problem - Index Of an Extra Element (Easy)
// Link - https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int findExtra(int a[], int b[], int n)
{
    for (int x = 0; x < n / 2; x++)
    {
        if (a[x] != b[x])
        {
            return x;
        }

        if (a[n - (x + 1)] != b[n - (x + 2)])
        {
            return n - (x + 1);
        }
    }
}