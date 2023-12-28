// https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int mod =1e9+7;
    vector<vector<int>>dp(n+1,vector<int>(7,0));

    for(int i=0;i<7;i++){
        dp[i][0] = 1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            dp[i][j] = dp[i][j-1];
            if(i>=j){
                dp[i][j]+=dp[i-j][i];
            }
            dp[i][j]%=mod;
        }
    }
    cout<<dp[n][6]<<endl;

    return 0;
}