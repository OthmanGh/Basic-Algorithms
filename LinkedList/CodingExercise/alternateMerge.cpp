// Alternate Merge
// Given two linked lists, insert nodes of second list into first list at alternate positions of first list.

// Input Format

// In the function pointer to the start of the two linklists is passed.

// Output Format

// Return a pointer to the new merged list.

// Sample Input

// 5->7->17->13->11
// 12->10->2->4->6

// Sample Output

// 5->12->7->10->17->2->13->4->11->6

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

node *alternateMerge(node *root1, node *root2)
{
    // Complete this function
    if (root1 == NULL)
    {
        return root2;
    }
    else if (root2 == NULL)
    {
        return root1;
    }

    node *merged_head = root1;
    node *temp1;
    node *temp2;

    while (root1 != NULL && root2 != NULL)
    {
        temp1 = root1->next;
        temp2 = root2->next;

        root1->next = root2;
        root2->next = temp1;

        // update :
        root1 = temp1;
        root2 = temp2;
    }
    return merged_head;
}

// Function to print the linked list
void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Test cases for alternateMerge
void testAlternateMerge()
{
    // Test Case 1
    node *list1 = new node(5);
    list1->next = new node(7);
    list1->next->next = new node(17);
    list1->next->next->next = new node(13);
    list1->next->next->next->next = new node(11);

    node *list2 = new node(12);
    list2->next = new node(10);
    list2->next->next = new node(2);
    list2->next->next->next = new node(4);
    list2->next->next->next->next = new node(6);

    cout << "Test Case 1:" << endl;
    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    node *mergedList1 = alternateMerge(list1, list2);
    cout << "Merged List 1: ";
    printList(mergedList1);
    cout << endl;

    // Test Case 2 (add more test cases as needed)
}

int main()
{
    // Run the test cases
    testAlternateMerge();

    return 0;
}
