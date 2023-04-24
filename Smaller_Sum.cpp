#include<bits/stdc++.h>
using namespace std;
/*You are given an array arr of n integers. For each index i, you have to find the sum of all integers present in the array with a value less than arr[i].

Example 1:

Input:
n = 3
arr = {1, 2, 3}
Output:
0 1 3
Explanation:
For 1, there are no elements lesser than itself.
For 2, only 1 is lesser than 2.
And for 3, 1 and 2 are lesser than 3, so the sum is 3.
Example 2:

Input:
n = 2
arr = {4, 4}
Output:
0 0
Explanation:
For 4, there are no elements lesser than itself.
For 4, there are no elements lesser than itself.
There are no smaller elements than 4.
Your Task:
You don't need to read input or print anything. Your task is to complete the function smallerSum() which takes an integer n and an array arr and returns an array of length n , the answer for every index.

Expected Time Complexity:O(n log n)
Expected Space Complexity:O(n)

Constraints:
1 <= n <= 105
0 <= arr[i] <= 109
*/

class Solution{
    public:
        int BinarySearch(int key, int temp[], int n)
        {
            int low = 0, high = n - 1, mid = 0, index = -1;
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (temp[mid] == key)
                {
                    index = mid;
                    high = mid - 1; // -->> For duplicate values in main array
                }
                else if (temp[mid] > key)
                {
                    high = mid - 1;
                }
                else
                    low = mid + 1;
            }
            return index;
        }
        vector<long long> smallerSum(int n, vector<int> &arr){
            
            vector<long long> ans(n);
            long long sum[n];
            int temp[n];
            for(int i=0;i<n; i++) temp[i] = arr[i];
            sort(temp, temp+n);
            sum[0] = temp[0];
            for(int i=1; i<n; i++)sum[i] = sum[i-1] +temp[i];
            for(int i=0; i<n; i++) {
                int index = BinarySearch(arr[i], temp, n);
                ans[i] = sum[index] - arr[i];
            }
            return ans;
        }
};