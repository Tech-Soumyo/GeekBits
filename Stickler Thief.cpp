#include <bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n)
{
    stack<int> st1, st2;
    for(int i=0; i<n; i++){
        int i1 = i%2;
        if(i1 == 0){
            st1.push(arr[i]);
        }
        else{
            st2.push(arr[i]);
        }
    }
    int sum1 =0;
    while(!st1.empty()){
        sum1 = st1.top() +sum1;
        st1.pop();
    }
    int sum2 = 0;
    while (!st2.empty())
    {
        sum2 = st2.top() + sum2;
        st2.pop();
    }
    if(sum1< sum2){
        return sum2;
    }

    if (sum2 < sum1)
    {
        return sum1;
    }
}