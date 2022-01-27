// Problem - Maximum triplet sum in array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/maximum-triplet-sum-in-array0129/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

int maxTripletSum(int arr[], int n)
{
    sort(arr, arr + n);
    return (int)arr[n - 1] + arr[n - 2] + arr[n - 3];
}
