#include <iostream> 
#include <vector> 
#include <string>

using namespace std;

template <class T>
class Stack
{  
private:
    vector<T> elements; // elements
public:
    void push(T const); // push element
    T top();            // return top element
};

template <class T>
void Stack<T>::push(T const element)
{
    elements.push_back(element); // vector function
}

template <class T>
T Stack<T>::top()
{
    return elements.back(); // vector function
}

int main()
{
    Stack<int> intStack;
    Stack<string> stringStack;
    intStack.push(7);
    intStack.push(10);
    cout << intStack.top() << endl;
    stringStack.push("hello");
    cout << stringStack.top() << std::endl;
    return 0;
}
