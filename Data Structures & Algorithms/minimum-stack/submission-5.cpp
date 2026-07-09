class MinStack {
public:
    stack<long long> s;
    long long minval = INT_MAX;
    MinStack() 
    {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            minval = val;
        }
        else
        {
            if(val < minval)
            {
                long long _val = 2LL * val - minval;
                s.push(_val);
                minval = val;
            }
            else
                s.push(val);
        } 
    }
    
    void pop() {
        if(s.top() < minval)
           minval = 2LL * minval - s.top();
        
        s.pop();
    }
    
    int top() {
        if(s.top() < minval)
        {
            return (int)minval;
        }
        else
        {
            return (int)s.top();
        }

    }
    
    int getMin() {
        return (int)minval;
    }
};
