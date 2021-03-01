#include <iostream>

#include <stuff.h>

int main() {
    auto s = stuff();
    std::cout << "Hello, World!" << std::endl;
    std::cout << s.something() << std::endl;
    return 0;
}
