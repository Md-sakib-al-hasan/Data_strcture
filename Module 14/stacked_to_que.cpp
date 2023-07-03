class MyQueue {
public:
  stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
       st.push(x); 
    }
    
    int pop() {
       int first;
       stack<int>newst;
       while(! st.empty()){
           int k=st.top();
           st.pop();
           if(st.empty()){
              first=k;
              break;
           }
           newst.push(k);
       }
       while(! newst.empty()){
          st.push(newst.top());
          newst.pop();
       }
       return first;
    }
    
    int peek() {
       int first;
       stack<int>newst;
       while(! st.empty()){
           int k=st.top();
           st.pop();
           if(st.empty() == true){
              first=k;
           }
           newst.push(k);
       }
        while(! newst.empty()){
          st.push(newst.top());
          newst.pop();
       }
       return first; 
    }
    
    bool empty() {
        return st.empty();
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