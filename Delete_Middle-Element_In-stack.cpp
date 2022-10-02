
class Solution
{
    private:
    void solve(stack<int>&s, int count , int sizeOfStack){
        // base case 
        if(count==sizeOfStack/2){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        count += 1;
        
        // recursive call 
        solve(s, count,sizeOfStack);
        s.push(num);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
         int count = 0;
         solve(s,count, sizeOfStack);
    }
};
