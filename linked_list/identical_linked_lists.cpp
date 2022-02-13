// Problem - Identical Linked Lists (Basic)
// Link - https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]Linked%20ListproblemStatusunsolveddifficulty[]-1page1category[]Linked%20List#

#include <bits/stdc++.h>
using namespace std;

bool areIdentical(struct Node *head1, struct Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if ((head1->next == NULL && head2->next != NULL) || (head2->next == NULL && head1->next != NULL))
        {
            return false;
        }

        if (head1->data != head2->data)
        {
            return false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}