#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumSubarraySum(int arr[], int n, int k) {
    vector<int> dp(n + 1, 0); // Dynamic programming array
    int maxSum = INT_MIN;  // Initialize the maximum sum to a very small value

    for (int i = 1; i <= n; i++) {
        dp[i] = max(arr[i - 1], dp[i - 1] + arr[i - 1]);

        if (i >= k) {
            maxSum = max(maxSum, dp[i]);

            // Subtract the element that is no longer part of the subarray
            dp[i] -= arr[i - k];
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int maxSum = maximumSubarraySum(arr, n, k);
    cout << "Maximum subarray sum with subarray length not exceeding " << k << ": " << maxSum << endl;

    return 0;
}
