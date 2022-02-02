// Problem - Multiply left and right array sum (Basic)
// Link - https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n)
{
    int leftSum = 0;
    int rightSum = 0;
    int half = n / 2;

    for (int x = 0; x < n; x++)
    {
        if (x < half)
        {
            leftSum += arr[x];
        }
        else
        {
            rightSum += arr[x];
        }
    }
    return leftSum * rightSum;
}