// Problem - Last index of One  (Basic)
// Link - https://practice.geeksforgeeks.org/problems/last-index-of-15847/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int lastIndex(string s)
{
    int idx = -1;

    for (int x = 0; x < s.size(); x++)
    {
        if (s[x] == '1')
        {
            idx = x;
        }
    }

    return idx;
}