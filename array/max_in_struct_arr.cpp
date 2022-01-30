// Problem - Rotate Array (Basic)
// Link - https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

/*
Structure of the element of the array is as
struct Height {
    int feet;
    int inches;
};
*/

int findMax(Height arr[], int n)
{
    int sum = 0;

    for (int x = 0; x < n; x++)
    {
        int feet = arr[x].feet * 12;
        int inches = arr[x].inches;

        if (feet + inches > sum)
        {
            sum = feet + inches;
        }
    }

    return sum;
}