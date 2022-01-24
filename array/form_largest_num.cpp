// Problem - Form largest number from digits (Basic)
// Link - https://practice.geeksforgeeks.org/problems/form-largest-number-from-digits5430/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

string MaxNumber(int a[], int n)
{
    // Sort an array in decending order
    sort(a, a + n, greater<int>());
    string num = "";

    for (int x = 0; x < n; x++)
    {
        string temp = to_string(a[x]);
        num += temp;
    }

    return num;
}
