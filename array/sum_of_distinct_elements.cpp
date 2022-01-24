// Problem - Sum of distinct elements for a limited range (Basic)
// Link - https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements-15115/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

int sumOfDistinct(int arr[], int n)
{
    sort(arr, arr + n);
    int sum = arr[0];

    for (int x = 1; x < n; x++)
    {
        if (arr[x - 1] != arr[x])
        {
            sum += arr[x];
        }
    }
    return sum;
}

int main()
{
    int size = 9;
    int arr[size] = {5, 1, 2, 4, 6, 7, 3, 6, 7};
    sumOfDistinct(arr, size);
    // Expected Output - 28
    return 0;
}