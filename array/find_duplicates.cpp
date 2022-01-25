// Problem - Find duplicates under given constraints (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-duplicates-under-given-constraints0856/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int A[])
{
    if (A[4] == A[5] || A[4] == A[3])
    {
        return A[4];
    }
    else
    {
        return A[5];
    }
}