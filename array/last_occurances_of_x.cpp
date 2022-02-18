// Problem - First and last occurrences of x (Basic)
// Link - https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
    vector<int> res;
    int firstPos = -1;
    int lastPos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            if (firstPos == -1)
            {
                firstPos = i;
            }

            if (i < n - 1 && arr[i + 1] > x)
            {
                lastPos = i;
                break;
            }
            else if (i == n - 1)
            {
                lastPos = i;
            }
        }

        if (arr[i] > x)
        {
            break;
        }
    }

    res.push_back(firstPos);
    res.push_back(lastPos);

    return res;
}