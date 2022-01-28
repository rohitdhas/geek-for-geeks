// Problem - Minimize sum of alternate product (Basic)
// Link - https://practice.geeksforgeeks.org/problems/minimize-sum-of-alternate-product2033/0/?category[]=Arrays&category[]=Arrays&difficulty[]=-1&page=1&query=category[]Arraysdifficulty[]-1page1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n)
{
    sort(a, (a + n));
    long long product = 0;

    for (int x = 0; x < int(n / 2); x++)
    {
        product += a[n - (x + 1)] * a[x];
    }
    return product;
}