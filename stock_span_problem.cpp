
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      
    // int[] spans = new int[price.length];
    vector<int>spans(n);
    spans[0] = 1; // Span of first element is always 1

    stack<int> indexStack;

    // Push the index of first element
    indexStack.push(0);

    for (int i = 1; i < n; i++) {
      while (!indexStack.empty()
          && price[indexStack.top()] <= price[i])
        indexStack.pop();

      // If index stack is empty, the price at index 'i'
      // is greater than all previous values
      if (indexStack.empty())
        spans[i] = i + 1;
      else
        spans[i] = i - indexStack.top();

      indexStack.push(i);
    }

    return spans;
    }
};
