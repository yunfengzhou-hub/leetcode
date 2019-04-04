class MyStack {

public:
    queue<int> mystack,temp;

    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        mystack.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(mystack.size()>1){
            temp.push(mystack.front());
            mystack.pop();
        }

        int num=mystack.back();
        mystack.pop();
        while(temp.size()>0){
            mystack.push(temp.front());
            temp.pop();
        }
        return num;
    }

    /** Get the top element. */
    int top() {
        return mystack.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return mystack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
