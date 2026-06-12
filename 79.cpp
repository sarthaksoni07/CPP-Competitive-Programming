#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack <int> s;
    stack<int>mins;
    int min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(mins.empty()|| mins.top()>=value){
            mins.push(value);
        }
    }
    
    void pop() {
        if(s.top()==mins.top()){
            mins.pop();
        }
        s.pop();
    }
    
    int top() {
        
        return s.top();
    }
    
    int getMin() {
        
        return mins.top();
    }
};
