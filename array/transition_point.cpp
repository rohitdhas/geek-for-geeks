// Problem - Form largest number from digits (Basic)
// Link - https://practice.geeksforgeeks.org/problems/form-largest-number-from-digits5430/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n)
{
    if (arr[0] != 0)
    {
        return 0;
    }
    else if (arr[n - 1] != 1)
    {
        return -1;
    }
    else
    {
        for (int x = n - 1; x >= 0; x--)
        {
            if (arr[x] == 0)
            {
                return x + 1;
            }
        }
    }
}