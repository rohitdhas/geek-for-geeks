// Problem - Binary Array Sorting (Basic)
// Link - https://practice.geeksforgeeks.org/problems/binary-array-sorting5355/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

vector<int> SortBinaryArray(vector<int> binArray)
{
    int oneCount = 0;
    int len = binArray.size();

    for (int x = 0; x < len; x++)
    {
        if (binArray[x] == 1)
        {
            oneCount++;
        }
    }

    if (oneCount == 0 || (len - oneCount) == 0)
        return binArray;

    for (int x = 0; x < len; x++)
    {
        if (x < (len - oneCount) && binArray[x] == 1)
        {
            binArray[x] = 0;
        }
        else if (x >= (len - oneCount) && binArray[x] == 0)
        {
            binArray[x] = 1;
        }
    }

    return binArray;
}