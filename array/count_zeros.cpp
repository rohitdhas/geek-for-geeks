// Problem - Count the Zeros (Easy)
// Link - https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n)
{
    int count = 0;

    sort(arr, (arr + n));

    for (int x = 0; x < n; x++)
    {
        if (arr[x] == 0)
        {
            count++;
        }
        else
        {
            return count;
        }
    }
    return count;
}