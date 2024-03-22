#include "../include/lib3.h"

using namespace std;

template <class T>
struct Node {
    T data;
    Node<T>* next;

    explicit Node(T val) : data(val), next(nullptr) {}
};

template <class T>
class Stack {
private:
    Node<T>* top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (top != nullptr) {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(const T & val) {
        auto newNode = new Node<T>(val);
        newNode->next = top;
        top = newNode;
    }

    void push2(T&& val) {
        auto newNode = new Node<T>(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << std::endl;
            return;
        }

        Node<T>* temp = top;
        top = top->next;
        delete temp;
    }

    T peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << std::endl;
            return T();
        }

        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};
