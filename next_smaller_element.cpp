 // Your code goes here
         stack<int>st;
        // int n=arr.size();
        vector<int>ans(n);

        st.push(-1);

        for(int i=n-1;i>=0;i--)

        {
        
            while(arr[i]<=st.top() && !st.empty())
            {

                st.pop();
            }

            ans[i]=st.top();

            st.push(arr[i]);

        }

        return ans;
