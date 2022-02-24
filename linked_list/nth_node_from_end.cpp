// Problem - Nth node from end of linked list (Easy)
// Link - https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int getNthFromLast(Node *head, int n)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    if (n > len)
    {
        return -1;
    }

    temp = head;
    for (int x = 0; x < len - n; x++)
    {
        temp = temp->next;
    }

    return temp->data;
}