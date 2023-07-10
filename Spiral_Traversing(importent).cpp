#include<bits/stdc++.h>
using namespace std;
#define MAX 1000 
int findK(int a[MAX][MAX], int n, int m, int k)
{
    int ru=n-1, rl=0, cu=m-1, cl=0, count=0;
    while(count !=n*m){
        for(int i =cl; i<=cu; i++){
            count++;
            if(count == k){
                return a[rl][i];
            }
        }
        rl++;
        for (int i = rl; i <= ru; i++)
        {
            count++;
            if (count == k)
            {
                return a[i][cu];
            }
        }
        cu--;
        for (int i = cu; i >= cl; i--)
        {
            count++;
            if (count == k)
            {
                return a[ru][i];
            }
        }
        ru--;
        for (int i = ru; i >= rl; i--)
        {
            count++;
            if (count == k)
            {
                return a[i][cl];
            }
        }
        cl++;
    } 
    return 0;  
}