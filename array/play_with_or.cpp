// Problem - Play With OR (Basic)
// Link - https://practice.geeksforgeeks.org/problems/play-with-or5515/1

#include <bits/stdc++.h>
using namespace std;

int *game_with_number(int arr[], int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        arr[x] = (arr[x] | arr[x + 1]);
    }

    return arr;
}
