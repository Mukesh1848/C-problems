// programe to find subArray with given sum with given sum

// time complexity :- O(n^2)
// space complexity :- O(1)


#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[], int n, int sum)
{
	int currentSum, i, j;

	// Pick a starting point
	for (i = 0; i < n; i++) {
		currentSum = arr[i];

		// try all subarrays starting with 'i'
		for (j = i + 1; j <= n; j++) {
			if (currentSum == sum) {
				cout << "Sum found between indexes " << i
					<< " and " << j - 1 << endl;
				return;
			}
			if (currentSum > sum || j == n){
				break;
			}
			currentSum = currentSum + arr[j];
		}
	}

	cout << "No subarray found";
	return;
}

// Driver Code
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}



// methods 2nd :- 


// time complexity :- O(n)
// space complexity :- O(1)


