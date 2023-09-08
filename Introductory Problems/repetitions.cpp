// https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;

    long long ans = 1, start = 0;

    for(long long i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            start = i;
        }
        ans = max(ans, i - start+1);
    }


    cout<<ans<<endl;
    return 0;
}