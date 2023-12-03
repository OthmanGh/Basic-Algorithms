#include <iostream>
#include "header.h"

int main()
{
    LinkedList list; // static object but the actual memory is dynamic

    list.push_back(10);
    list.push_front(30);
    list.push_back(20);
    // list.push_front(40);
    list.insert(60, 3);
    // list.pop_front(); // 40 will get deleted from the list
    list.insert(70, 0);
    // list.pop_back();
    // list.print_list();
    list.remove(2); //  70->30->60->nullptr
    list.print_list();
    // int key;
    // std::cout << "Enter element you wanna search for : ";
    // std::cin >> key;

    // int idx1 = list.linear_search(key);

    // if (idx1 != -1)
    // {
    //     std::cout << "linear search : " << key << " is present at index " << idx1 << std::endl;
    // }
    // else
    // {
    //     std::cout << "linear search : " << key << " is not present in the list...." << std::endl;
    // }

    // int idx2 = list.recursive_search(key);

    // if (idx2 != -1)
    // {
    //     std::cout << "recursive search : " << key << " is present at index " << idx2 << std::endl;
    // }
    // else
    // {
    //     std::cout << "recursive search : " << key << " is not present in the list...." << std::endl;
    // }
    // std::cout << std::endl;

    return 0;
}