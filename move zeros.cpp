#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    int l = -1, r = 0;
    while (r < n)
    {
        if (arr[r] > 0)
            swap(arr[++l], arr[r++]);
        else
            r++;
    }
    /*OR
    int j=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(j==-1)j=i+1;
                for(j;j<n;j++){
                    if(arr[j]!=0){
                        swap(arr[i],arr[j]);
                        break;
                    }
                }
            }
        }*/
}