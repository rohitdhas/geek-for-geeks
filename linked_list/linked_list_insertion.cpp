// Problem - Linked List Insertion (Basic)
// Link - https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1/?page=1&difficulty[]=-1&status[]=unsolved&category[]=Linked%20List&sortBy=submissions#

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x)
    {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)
    {
        Node *temp = head;
        Node *newNode = new Node(x);

        if (head == NULL)
        {
            return newNode;
        }

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        return head;
    }
};
