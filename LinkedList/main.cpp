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
    return 0;
}