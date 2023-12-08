#include <iostream>
#include "header.h"

int main()
{
    // Test with integer data type
    LinkedList<int> intList;
    intList.push_back(5);
    intList.push_back(10);
    intList.push_front(2);
    intList.insert(7, 1);
    intList.print_list();

    int searchResult = intList.linear_search(10);
    std::cout << "Linear Search Result for 10: " << searchResult << std::endl;

    int recursiveSearchResult = intList.recursive_search(7);
    std::cout << "Recursive Search Result for 7: " << recursiveSearchResult << std::endl;

    intList.pop_front();
    intList.pop_back();
    intList.print_list();

    std::cout << "\n-----------------------------------\n";

    // Test with double data type
    LinkedList<double> doubleList;
    doubleList.push_back(3.14);
    doubleList.push_back(2.718);
    doubleList.push_front(1.1);
    doubleList.insert(2.22, 1);
    doubleList.print_list();

    double searchResultDouble = doubleList.linear_search(2.718);
    std::cout << "Linear Search Result for 2.718: " << searchResultDouble << std::endl;

    double recursiveSearchResultDouble = doubleList.recursive_search(1.1);
    std::cout << "Recursive Search Result for 1.1: " << recursiveSearchResultDouble << std::endl;

    doubleList.pop_front();
    doubleList.pop_back();
    doubleList.print_list();

    return 0;
}