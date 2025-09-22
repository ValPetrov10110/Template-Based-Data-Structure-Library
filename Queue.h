#pragma once
#include <vector>
#include <iostream>

template <typename T>
class Queue {
private:
    std::vector<T> container;

public:
    // Checks to see if the Queue is empty
    bool isEmpty() {
        if (container.empty()) {
            return true;
        }
        else {
            return false;
        }
    }

    // Returns the size of the Queue
    size_t size() { return container.size(); }

    // Returns the value in the front of the Queue
    const T& front() { return container.back(); }

    // Returns the value in the back of the Queue
    const T& back() { return container.front(); }

    // Inserts an element in the back of the Queue
    void push_back(const T& a) { container.insert(container.begin(), a); }

    // Removes the first element in the Queue
    void pop_front() { container.pop_back(); }

    // Iterates through the entirety of the data structure
    void print() {
        typename std::vector<T>::iterator it;

        for (it = container.end() - 1; it != container.begin() - 1; --it) {
            std::cout << *it << " ";
        }
    }
};