                           // Method first 
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
       stack<int>reverseStack;
         while(!st.empty()){
         int num = st.top();
         st.pop();
         reverseStack.push(num);
        }
        
        while(!reverseStack.empty()){
            int num = reverseStack.top();
            reverseStack.pop();
            cloned.push(num);
        }
        // return cloned;
    }
};
