#include <iostream>

using namespace std;

class stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    stack(int size); //constructor is called whenever we create an object for the first time
    ~stack();
    void push(int value);
    int pop();
    int peek(int pos);
    void change(int pos, int value);
    int count();
    void display();
    bool is_empty();
    bool is_full();
};

stack::stack(int size) {
    arr = new int[size]; //allocate in memory
    capacity = size;  //capacity of the stack is equal to amount of elements in the stack
    top = -1;  //when we first initialize the stack, it is empty and the top is "pointing" at anothing, there fore -1.
}

stack::~stack() {
    delete[] arr; //deallocate in memory
}

void stack::push(int value) {
    if(is_full()){
        std::cout << "stack overflow";
    }
    else{
        top++;
        arr[top] = value;
    }
}

int stack::pop() {
    if(is_empty()){
        std:cout << "stack underflow";
        return 0;
    }
    else{
        int temp = arr[top]; //we want to pop the value at the top of the stack
        top--;
        return temp;
    }
}

int stack::peek(int pos) {
    if (!is_empty()) {
        return arr[pos];
    }
}

int stack::count(){
    return(top+1);
}

void stack::change(int pos, int value) {
    arr[pos] = value;
    cout << "value changed at position" << pos << endl;
}

void stack::display() {
    for(int i = 0; i < capacity; i++){
        cout << arr[i] << endl;
    }
}

bool stack::is_empty() {
    if(top == -1){
        return true;
        }
        return false;
    }

bool stack::is_full() {
    if(top == capacity) {
        return true;
    }
        return false;
}


int main() {
 stack mystack(50);
 mystack.push(2);
 mystack.push(5);
 mystack.push(9);
 mystack.push(1);
 mystack.push(4);
mystack.display();
}
