// Problem - Game with nos (Basic)
// Link - https://practice.geeksforgeeks.org/problems/game-with-nos3123/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int *game_with_number(int arr[], int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        arr[x] = (arr[x] ^ arr[x + 1]);
    }

    return arr;
}
