/*
 * This header file is in charge of the implementation of the
 * Stack ADT
 */

#pragma once
#include <iostream>
#include <vector>

template <typename T>
class Stack {

// The underlying container for the data structure
private:
    std::vector<T> container;

public:
    // Inserts an element into the stack
    void push(T a) {
        container.push_back(a);
    }

    // Removes an element from the stack
    void pop() {
        container.pop_back();
    }

    // Returns the top element of the stack
    T top() {
        return container.back();
    }

    // Returns true if stack is empty, else false
    // This is done via integers (1 = true; 0 = false)
    bool isEmpty() {
        if (container.empty()) {
            return true;
        }
        else {
            return false;
        }
    }

    // Returns the size of the stack
    size_t size() {

    }

    // Iterates through the entirety of the data structure
    void print() {
        typename std::vector<T>::iterator it;

        for (it = container.end() - 1; it != container.begin() - 1; --it) {
            std::cout << *it << "\n";
        }
    }

};
