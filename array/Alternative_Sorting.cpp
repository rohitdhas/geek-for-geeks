// Problem - Alternative Sorting (Basic)
// Link - https://practice.geeksforgeeks.org/problems/alternative-sorting1311/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{

public:
    vector<int> alternateSort(int arr[], int N)
    {
        vector<int> result;
        sort(arr, (arr + N));

        int min = 0;
        int max = N - 1;

        for (int x = 1; x <= N && (min <= max); x++)
        {
            if (x % 2 != 0)
            {
                result.push_back(arr[max]);
                max--;
            }
            else
            {
                result.push_back(arr[min]);
                min++;
            }
        }
        return result;
    }
};

int main()
{
    int n = 7;
    int arr[n] = {7, 1, 2, 3, 4, 5, 6};

    Solution test;
    test.alternateSort(arr, n);
    // Output: 7 1 6 2 5 3 4

    return 0;
}
