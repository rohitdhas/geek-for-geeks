// Problem - Replace all 0's with 5 (Basic)
// Link - https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]ArraysproblemStatusunsolveddifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int convertFive(int n)
{
    string str;
    str = to_string(n);

    for (int x = 0; x < str.size(); x++)
    {
        if (str[x] == '0')
        {
            str[x] = '5';
        }
    }

    return (int)stoi(str);
}