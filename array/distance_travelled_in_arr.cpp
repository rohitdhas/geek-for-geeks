// Problem - Total distance travelled in an array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/total-distance-travelled-in-an-array3628/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long distance(int arr[], int n)
{
    long long des = 0;
    int a[n];

    for (int x = 0; x < n; x++)
    {
        a[arr[x] - 1] = x;
    }

    for (int x = 0; x < n - 1; x++)
    {
        des += abs(a[x] - a[x + 1]);
    }
    return des;
}