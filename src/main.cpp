#include <iostream>
#include "List.h"
#include "NodeIterator.h"

int main() {
    List<int> list;
    list.push_back(12);
    list.push_back(89);
    list.push_back(52);
    list.push_back(77);
    list.push_back(125);
    list.push_back(777);


    std::cout << list;

    return 0;

}
