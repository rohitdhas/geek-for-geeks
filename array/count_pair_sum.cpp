// Problem - Count pair Sum (Basic)
// Link - https://practice.geeksforgeeks.org/problems/count-pair-sum5956/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr1[], int arr2[], int m, int n, int x)
{
    int pairsCount = 0;

    int i = 0;
    int j = n - 1;

    while (i != m && j != -1)
    {
        int tempSum = arr1[i] + arr2[j];
        if (tempSum < x)
        {
            i++;
        }
        else if (tempSum > x)
        {
            j--;
        }
        else if (tempSum == x)
        {
            pairsCount++;
            i++;
        }
    }

    return pairsCount;
}

int main()
{
    int M = 4, N = 4, sum = 10;
    int arr1[M] = {1, 3, 5, 7};
    int arr2[N] = {2, 3, 5, 8};

    countPairs(arr1, arr2, M, N, sum);
    //Expected Output: 2

    return 0;
}