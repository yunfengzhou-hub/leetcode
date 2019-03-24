#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> mystack,minstack;
    MinStack() {

    }

    void push(int x) {
        mystack.push_back(x);
        if(minstack.size()<1||x<=minstack[minstack.size()-1])
            minstack.push_back(x);
    }

    void pop() {
        int x=mystack[mystack.size()-1];
        mystack.pop_back();
        if(x==minstack[minstack.size()-1])
            minstack.pop_back();
    }

    int top() {
        return mystack[mystack.size()-1];
    }

    int getMin() {
        return minstack[minstack.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

 int main(void){
    MinStack* my= new MinStack();
    my->push(3);
    cout<<my->top();
    cout<<my->getMin();
 }
