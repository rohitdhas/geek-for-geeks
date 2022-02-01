// Problem - Max distance between same elements  (Easy)
// Link - https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0category[]Arrayspage1#

#include <bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n)
{
    int max = 0;

    for (int x = 0; x < n; x++)
    {
        for (int y = n - 1; y > x; y--)
        {
            if (arr[y] == arr[x] && (y - x) > max)
            {
                max = y - x;
                break;
            }
        }
    }
    return max;
}