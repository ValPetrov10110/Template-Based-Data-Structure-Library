#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

/*
 * Stack.h is fundamentally complete. Future additions are more specific
 * Queue.h is fundamentally complete. Future additions are more specific
 */

int main() {
    Stack<int> pushTest;
    std::cout << "Stack Empty: " << pushTest.isEmpty() << '\n';
    std::cout << "Stack Size: " << pushTest.size() << '\n';
    pushTest.push(5);
    pushTest.push(6);
    pushTest.push(7);
    std::cout << "The top element is " << pushTest.top() << '\n';
    std::cout << "Stack Empty: " << pushTest.isEmpty() << '\n';
    std::cout << "Stack Size: " << pushTest.size() << '\n';
    pushTest.print();
    pushTest.pop();
    std::cout << "\n";
    pushTest.print();
    std::cout << "The top element is " << pushTest.top() << '\n';

    Queue<int> myQ;
    std::cout << "Is my Queue empty: " << myQ.isEmpty() << '\n';
    myQ.push_back(6);
    myQ.push_back(8);
    myQ.push_back(12);
    myQ.print();
    std::cout << "\nThe value first in line is: " << myQ.front() << '\n';
    std::cout << "The value last in line is: " << myQ.back() << '\n';
    std::cout << "The size of the Queue is: " << myQ.size() << '\n';
    std::cout << "Is my Queue empty: " << myQ.isEmpty() << '\n';
    myQ.pop_front();
    myQ.print();

    LinkedList<int> myList;
    std::cout << "Is it empty?: " << myList.isEmpty() << '\n';
    myList.addFirst(5);
    std::cout << "Is it empty?: " << myList.isEmpty() << '\n';


    return EXIT_SUCCESS;
}