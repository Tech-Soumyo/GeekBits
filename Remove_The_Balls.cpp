/*Imagine an imaginary array of length N containing balls. Given 2 arrays color and radius of length N each, where color[i] represents the color of 
the ith ball while radius[i] represents the radius of ith ball. If two consecutive balls have the same color and size, both are removed from the array.
 Geek wants to know the length of the final imaginary array.

Example 1:

Input:
N = 3
color[] = {2, 2, 5}
radius[] = {3, 3, 4}
Output:
1
Explanation:
First ball and second ball have same color 2 and
same radius 3.So,after removing only one ball
is left.It could not be removed from the array.
Hence, the final array has length 1.
Example 2:

Input:
N = 4
color[] = {1, 3, 3, 1}
radius[] = {2, 5, 5, 2}
Output:
0
Explanation:
Ball 2 and ball 3 have same color 3 and same radius
5.So,they are removed. Now, we have got our
color[]={1, 1} and radius[]={2, 2}.Both the left
balls are consecutive now and they are having
same color and radius. So,these two balls are
removed as well. Now,we are left with empty
final array. Hence, the length of final array is 0.
Your Task:
You don't need to read input or print anything. Your task is to complete the function finLength(), which takes integer N and array color[ ] and array
 radius[ ] as input parameters and returns the size of the final imaginary array.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ N ≤ 105
1 ≤ color[i] ≤ 109
1 ≤ radius[i] ≤ 109    */
#include <bits\stdc++.h>
using namespace std;
class Solution
{
public:
    int findLength(int N, vector<int> color, vector<int> radius)
    {
        stack<int> st;
        int index = st.top();
        for(int i =0; i<N; i++)
        {
            if(st.size())
            {
                if(color[index] == color[i] && radius[index] == radius[i])
                {
                    st.pop();
                }
                else st.push(i);
            }
            else st.push(i);
        }
        return st.size();
    }
};
/*
// User function Template for C++

class Solution {
public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>> balls;
        for(int i = 0; i < N; i++) {
            if(!balls.empty() && balls.top().first == color[i] && balls.top().second == radius[i])
                balls.pop();
            else
                balls.push({color[i], radius[i]});
        }
        return balls.size();
    }
};
*/