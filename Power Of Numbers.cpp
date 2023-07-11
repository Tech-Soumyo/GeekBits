#include<bits/stdc++.h>
using namespace std;
#define mod  1000000007
long long power(int N, int R)
{
    if(R==1) return N%mod;
    long long half = power(half, R/2);
    half = (half*half)%mod;
    if(R%2 ==1) half = (half *N)%mod;
    return half;
}