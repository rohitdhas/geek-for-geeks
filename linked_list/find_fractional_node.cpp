// Problem - Find n/k th node in Linked list (Basic)
// Link - https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

int fractional_node(struct Node *head, int k)
{
    float n = 0.0;
    Node *temp = head;

    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }

    int idx = ceil(n / k);
    temp = head;

    for (int x = 0; x < idx - 1; x++)
    {
        temp = temp->next;
    }

    return temp->data;
}