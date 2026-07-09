class MinStack {
public:
    /*stack<long long> s;
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
                long long _val = (long long)2 * val - minval;
                s.push(_val);
                minval = val;
            }
            else
                s.push(val);
        } 
    }
    
    void pop() {
        if(s.top() < minval)
           minval = 2 * minval - s.top();
        
        s.pop();
    }
    
    int top() {
        if(s.top() < minval)
        {
            return minval;
        }
        else
        {
            return s.top();
        }

    }
    
    int getMin() {
        return (int)minval;
    }*/
    stack<pair<int, int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push({val,val});
        }
        else
        {
            if(s.top().second>val)
            {
                s.push({val,val});
            }
            else
            {
                s.push({val,s.top().second});
            }

        }
        
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
