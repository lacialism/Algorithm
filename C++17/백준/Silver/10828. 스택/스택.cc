#include <iostream>
using namespace std;

class Stack;
class StackNode {
    int data;
    StackNode* preNode;
public:
    friend Stack;
    StackNode(int x){data = x;}
};

class Stack {
    StackNode* topNode;
    int number;
    void delChaining(StackNode* delNode);
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int size();
    int empty();
    int top();
};

void Stack::delChaining(StackNode* delNode)
{
    if (delNode->preNode != NULL)
    {
        delChaining(delNode->preNode);
    }
    delete delNode;
}

Stack::Stack()
{
    topNode = NULL;
    number = 0;
}

Stack::~Stack()
{
    if(topNode != NULL)
        delChaining(topNode);
}

void Stack::push(int x)
{
    StackNode* curNode = new StackNode(x);

    curNode->preNode = topNode;
    topNode = curNode;
    number++;
}

int Stack::pop()
{
    if(topNode == NULL)
        return -1;
    int tmp = topNode->data;

    delete topNode;

    topNode = topNode->preNode;
    number--;

    return tmp;
}

int Stack::size()
{
    return number;
}

int Stack::empty()
{
    return topNode == NULL ? 1 : 0;
}

int Stack::top()
{
    return (topNode == NULL) ? -1 : topNode->data;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Stack mystack;

    string inst;
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> inst;

        if (inst == "push")
        {
            int x;
            cin >> x;
            mystack.push(x);
        }
        else if (inst == "pop")
            cout << mystack.pop() << endl;
        else if (inst == "size")
            cout << mystack.size() << endl;
        else if (inst == "empty")
            cout << mystack.empty() << endl;
        else if (inst == "top")
            cout << mystack.top() << endl;
    }


    return 0;
}