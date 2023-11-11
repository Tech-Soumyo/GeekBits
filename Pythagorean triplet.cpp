#include<bits/stdc++.h>
using namespace std;

bool power (int arr[], int n){
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++){
        int j = i+1;
        for(int k = j+1; k<n; k++){
            if ((pow(arr[i], 2) + pow(arr[j], 2) == pow(arr[k], 2)) || (pow(arr[k], 2) + pow(arr[j], 2) == pow(arr[i], 2)) || (pow(arr[k], 2) + pow(arr[i], 2) == pow(arr[j], 2)))
            {
                return true;
            }
        }
    }
    return false;
}