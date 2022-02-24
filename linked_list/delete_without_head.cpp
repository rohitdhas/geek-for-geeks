// Problem - Delete without head pointer (Easy)
// Link - https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

#include <bits/stdc++.h>
using namespace std;

void deleteNode(Node *del)
{
    del->data = del->next->data;
    del->next = del->next->next;
}