#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

template <typename Type>
class Queue {
private:
    struct Node {
        Type data;
        Node *next;
        Node(Type data, Node *next = nullptr) : data(data), next(next) {}
    };
    Node *front;
    Node *back;

public:
    Queue() : front(nullptr), back(nullptr) {}
    Queue(const Queue<Type> &q) : front(nullptr), back(nullptr) {
        Node *current = q.front;
        while (current != nullptr) {
            enqueue(current->data);
            current = current->next;
        }
    }

    Queue<Type> &operator=(const Queue<Type> &q) {
        if (this != &q) {
            clear();
            Node *current = q.front;
            while (current != nullptr) {
                enqueue(current->data);
                current = current->next;
            }
        }
        return *this;
    }

    ~Queue() {
        clear();
    }

    void enqueue(Type data) {
        Node *newNode = new Node(data);
        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
    }

    Type peek() {
        if (!isEmpty()) {
            return front->data;
        } else {
            throw "Queue is empty";
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            Node *temp = front;
            front = front->next;
            delete temp;
        } else {
            throw runtime_error("Queue is empty");
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    friend ostream &operator<<(ostream &out, const Queue<Type> &q) {
        Node *current = q.front;
        while (current != nullptr) {
            out << current->data << " ";
            current = current->next;
        }
        return out;
    }
};