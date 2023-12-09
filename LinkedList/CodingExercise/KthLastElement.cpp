// Kth Last Element
// Implement a function that returns the Kth last of element from the linked list, in a single pass. You can assume K will be less than / equal to length of linked list.
// (Hint : Use two pointers similar to Runner Technique)
// Input
// You will get head of the linked list.
// 1 -> 2 -> 3 -> 4 -> 5 ->6 ->7
// K = 3
// Output:
// 5
// Explanation:
// Third last element is 5.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int kthLastElement(node *head, int k)
{
    // Complete this function to return kth last element
    node *slow = head;
    node *fast = head;

    for (int i = 0; i < k; i++)
    {
        if (fast == NULL)
        {
            return -1;
        }
        fast = fast->next;
    }

    while (fast != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->data;
}

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);
    head->next->next->next->next->next->next = new node(7);

    cout << "Kth Last Element for K = 3: " << kthLastElement(head, 3) << endl;

    // Clean up memory
    node *current = head;
    while (current != NULL)
    {
        node *next = current->next;
        delete current;
        current = next;
    }
    return 0;
}