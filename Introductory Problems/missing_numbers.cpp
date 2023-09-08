// https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long sum = 0;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;
    }

    long long ans = (n*(n+1))/2 - sum;
    cout<<ans<<endl;
}