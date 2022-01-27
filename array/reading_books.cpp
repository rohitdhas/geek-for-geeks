// Problem - Reading Books (Basic)
// Link - https://practice.geeksforgeeks.org/problems/reading-books3803/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long maxPoint(int N, int K, long long A[], long long B[])
{
    long long points = 0;

    for (int x = 0; x < N; x++)
    {
        long long temp = (K / A[x]) * B[x];
        if (temp > points)
        {
            points = temp;
        }
    }

    return points;
}