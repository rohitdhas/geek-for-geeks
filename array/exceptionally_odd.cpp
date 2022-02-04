// Problem - Exceptionally odd (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int getOddOccurrence(int arr[], int n)
{

    sort(arr, (arr + n));

    int count = 1;
    int num = arr[0];

    for (int x = 1; x < n; x++)
    {
        if (arr[x] != num)
        {
            if (count % 2 != 0)
            {
                return num;
            }
            else
            {
                num = arr[x];
                count = 1;
            }
        }
        else
        {
            count++;
        }
    }

    return num;
}