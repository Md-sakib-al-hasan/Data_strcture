class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
      queue<int>newQue;
      int last;
      while(!q.empty()){
          int k=q.front();
          q.pop();
          if(q.empty()== true){
              last=k;
              break;
          }
          newQue.push(k);
      }
      q=newQue;
      return last;
    }
    
    int top() {
       queue<int>newQue;
      int last;
      while(!q.empty()){
          int k=q.front();
          q.pop();
          if(q.empty()== true){
              last=k;
          }
          newQue.push(k);
      }
      q=newQue;
      return last;
        
    }
    
    bool empty() {
      return q.empty();
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