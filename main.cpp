#include <iostream>
#include <cstdlib>
#include "Stack.h"

int main() {
    Stack<int> pushTest;
    pushTest.push(5);
    pushTest.push(6);
    pushTest.push(7);
    pushTest.print();
    pushTest.pop();
    std::cout << "\n";
    pushTest.print();


    return EXIT_SUCCESS;
}