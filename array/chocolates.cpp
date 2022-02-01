// Problem - Ishaan Loves Chocolates (Basic)
// Link - https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int chocolates(int arr[], int n)
{
    int min = INT_MAX;

    for (int x = 0; x < n; x++)
    {
        if (arr[x] < min)
        {
            min = arr[x];
        }
    }
    return min;
}
