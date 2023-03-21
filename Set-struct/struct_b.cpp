#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = nullptr;
    Node *current = nullptr;

    // Add nodes to the linked list
    for (int i = 1; i <= 5; i++)
    {
        Node *node = new Node;
        node->data = i;
        node->next = nullptr;
        if (current == nullptr)
        {
            head = node;
            current = node;
        }
        else
        {
            current->next = node;
            current = node;
        }
    }

    // Traverse the linked list and print the data
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
