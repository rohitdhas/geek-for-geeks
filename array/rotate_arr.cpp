// Problem - Rotate Array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

void printRotated(int arr[], int by, int size)
{
    for (int a = by; a < size; a++)
    {
        cout << arr[a] << " ";
    }
    for (int b = 0; b < by; b++)
    {
        cout << arr[b] << " ";
    }
}

int main()
{
    int t;
    cin >> t;

    for (int x = 0; x < t; x++)
    {
        int n, d;
        cin >> n;
        int arr[n] = {0};
        cin >> d;

        for (int y = 0; y < n; y++)
        {
            int elm;
            cin >> elm;
            arr[y] = elm;
        }

        printRotated(arr, d, n);
        cout << endl;
    }

    return 0;
}