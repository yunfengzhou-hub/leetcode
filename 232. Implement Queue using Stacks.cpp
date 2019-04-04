class MyQueue {
public:
    vector<int> myqueue;

    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        myqueue.push_back(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp=myqueue[0];
        for(int i=0;i<myqueue.size()-1;i++){
            myqueue[i]=myqueue[i+1];
        }
        myqueue.pop_back();
        return temp;
    }

    /** Get the front element. */
    int peek() {
        return myqueue[0];
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return myqueue.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
