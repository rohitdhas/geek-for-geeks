// Problem - Rearranging array
// Link - https://practice.geeksforgeeks.org/problems/rearranging-array1648/0/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a, a + n);
        int count = 2;

        answer[0] = a[0];
        answer[1] = a[n - 1];

        for (int x = 1; x < n; x++)
        {
            answer[count] = a[x];
            answer[count + 1] = a[n - (x + 1)];
            count += 2;
        }
    }
};

int main()
{
    int const SIZE = 4;
    int arr[SIZE] = {4, 5, 1, 2, 3};
    int ans[SIZE];
    Solution test;
    test.Rearrange(arr, SIZE, ans);
    // Expected Output - 1 5 2 4 3
    return 0;
}