// Problem - Queue using two Stacks (Easy)
// Link - https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1

#include <bits/stdc++.h>
using namespace std;

class StackQueue
{
private:
    stack<int> s1;
    stack<int> s2;

public:
    void push(int B);
    int pop();
};

// Function to push an element in queue by using 2 stacks.
void StackQueue ::push(int x)
{
    s1.push(x);
}

// Function to pop an element from queue by using 2 stacks.
int StackQueue ::pop()
{
    if (s2.empty())
    {
        while (!s1.empty())
        {
            int temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
    }

    if (s2.empty())
    {
        return -1;
    }
    else
    {
        int temp = s2.top();
        s2.pop();
        return temp;
    }
}