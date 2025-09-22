#pragma once
#include <vector>

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
    const T& front() {

    }

    // Returns the value in the back of the Queue
    const T& back() {

    }

    // Inserts an element in the back of the Queue
    void push_back(const T& a) {

    }

    // Removes AND returns the first element in the Queue
    const T& pop_front() {

    }
};