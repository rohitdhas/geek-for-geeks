// Problem - Minimum distance between two numbers (Basic)
// Link - https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int minDist(int a[], int n, int x, int y)
{
    int startPos = -1;
    int endPos = -1;

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            startPos = i;
            int dest = abs(endPos - startPos);

            if (endPos != -1 && dest < min)
            {
                min = dest;
            }
        }

        if (a[i] == y)
        {
            endPos = i;
            int dest = abs(endPos - startPos);

            if (startPos != -1 && dest < min)
            {
                min = dest;
            }
        }
    }

    return min == INT_MAX ? -1 : min;
}