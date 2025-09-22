#include <iostream>
#include <cstdlib>
#include "Stack.h"

int main() {
    Stack<int> pushTest;
    pushTest.push(5);
    pushTest.push(6);
    pushTest.push(7);
    std::cout << "The top element is " << pushTest.top() << '\n';
    pushTest.print();
    pushTest.pop();
    std::cout << "\n";
    pushTest.print();
    std::cout << "The top element is " << pushTest.top() << '\n';


    return EXIT_SUCCESS;
}