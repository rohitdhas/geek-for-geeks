// Problem - Missing number (Basic)
// Link - https://practice.geeksforgeeks.org/problems/missing-number4257/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    int sum = N * (N + 1) / 2;
    int arrSum = 0;

    for (int x = 0; x < N - 1; x++)
    {
        arrSum += A[x];
    }

    return sum - arrSum;
}

int main()
{
    int size = 4;
    int arr[size - 1] = {1, 4, 3};
    missingNumber(arr, size);
    return 0;
}