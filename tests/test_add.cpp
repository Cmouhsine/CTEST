#include "add.h"
#include <cassert>
#include <iostream>

int main() {
    assert(add(2, 3) == 5);
    std::cout << "Test passed!" << std::endl;
    return 0;
}
