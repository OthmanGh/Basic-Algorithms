#include <iostream>
#include "header.h"

int main()
{
    LinkedList list;

    list.push_back(10);
    list.push_front(30);
    list.push_back(20);
    list.push_front(40);

    list.print_list();

    int key;
    std::cout << "Enter element you wanna search for : ";
    std::cin >> key;

    int idx = list.linear_search(key);

    if (idx != -1)
    {
        std::cout << key << " is present at index " << idx << std::endl;
    }
    else
    {
        std::cout << key << " is not present in the list....";
    }

    return 0;
}