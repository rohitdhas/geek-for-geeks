// Problem - Reverse a linked list (Easy)
// Link - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node *reverseList(struct Node *head)
{
    Node *p = head;
    Node *q = NULL;
    Node *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    return q;
}
