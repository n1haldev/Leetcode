class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        queue.push_back(x);
    }
    
    int pop() {
        int last_ele = -1;
        if(!queue.empty())
        last_ele = queue.front();
        queue.erase(queue.begin());
        return last_ele;
    }
    
    int peek() {
        if(queue.size() == 0) 
            return -1;
        return queue[0];
    }
    
    bool empty() {
        return queue.empty();
    }
    
private:
    vector<int> queue;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */