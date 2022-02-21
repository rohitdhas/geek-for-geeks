// Problem - Check If Circular Linked List (Basic)
// Link - https://practice.geeksforgeeks.org/problems/circular-linked-list/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

bool isCircular(Node *head)
{
    Node *first = head;
    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp == first)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}