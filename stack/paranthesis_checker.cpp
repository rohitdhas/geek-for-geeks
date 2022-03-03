// Problem - Parenthesis Checker (Easy)
// Link - https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    stack<char> s;
    unordered_map<char, char> obj;

    obj['{'] = '}';
    obj['['] = ']';
    obj['('] = ')';

    for (char str : x)
    {
        if (str == '{' || str == '(' || str == '[')
        {
            s.push(str);
        }

        if (str == '}' || str == ')' || str == ']')
        {
            if (s.empty())
                return false;
            if (obj[s.top()] != str)
                return false;
            s.pop();
        }
    }

    return s.empty();
}