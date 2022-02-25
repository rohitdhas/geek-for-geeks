// Problem - Count the Specials (Easy)
// Link - https://practice.geeksforgeeks.org/problems/count-the-specials/1

#include <bits/stdc++.h>
using namespace std;

int countSpecials(int arr[], int sizeof_array, int K)
{

    int f = floor(sizeof_array / K), count = 0;
    unordered_map<int, int> obj;

    for (int x = 0; x < sizeof_array; x++)
    {
        obj[arr[x]]++;
    }

    for (auto itr : obj)
    {
        if (itr.second == f)
        {
            count++;
        }
    }

    return count;
}