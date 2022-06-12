#include <iostream>
#define SIZE 10

using namespace std;

class Stack {
    private:
        int m[SIZE];
        int len=0;
    public:
        void reset();
        bool push(int num);
        void pop();
        void print();    
};

void Stack::reset() {
    for(int i=0;i<SIZE;i++) {
        m[i] = 0;
    }
    len = 0;
}

bool Stack::push(int num) {
    if(len == SIZE) {
        return false;
    }
    else {
        m[len] = num;
        len++; 
        return true;
    }
}

void Stack::pop() {
    m[len] = 0;
    len--;
}

void Stack::print() {
    cout << " ( ";
    for(int i=0; i<len; i++) {
        cout << " " << m[i] << " ";
    }
    cout << " ) " <<  endl;
}

int main() {
    Stack stack;
    stack.reset();
    stack.print();
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
