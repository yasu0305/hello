#include <iostream>
#include <format>
#include <stdio.h>

int main() {
    std::cout << "Hello, World1!" << std::endl;
    std::cout << std::format("Hello, {}!", "World2") << std::endl;
    std::printf("Hello, %s!\n", "World3");
    printf("Hello, %s!\n", "World4");
    return 0;
}
