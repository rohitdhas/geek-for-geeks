// Problem - Detect Loop in linked list (Easy)
// Link - https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

#include <bits/stdc++.h>
using namespace std;

bool detectLoop(Node *head)
{
    Node *p, *q;
    p = q = head;

    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;

        if (!p && !q)
            return false;
        if (p == q)
            return true;
    } while (p && q);

    return false;
}