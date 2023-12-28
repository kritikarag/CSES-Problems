// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
#include <string>
using namespace std;
using ll = long long int;
using pr = pair<ll, ll>;
using umll = unordered_map<ll, ll>;
using omll = map<ll, ll>;
using umcl = unordered_map<char, ll>;
using omcl = map<char, ll>;
using qc = queue<char>;
using qi = queue<ll>;
using qp = queue<pair<ll, ll>>;
using v1i = vector<ll>;
using v1c = vector<char>;
using v1b = vector<bool>;
using v2i = vector<vector<ll>>;
using v2c = vector<vector<char>>;
using v1b = vector<bool>;
using v2b = vector<vector<bool>>;
using v1p = vector<pair<ll, ll>>;
using maxpq = priority_queue<ll>;
using minpq = priority_queue<ll, vector<ll>, greater<ll>>;
using maxpairpq = priority_queue<pair<ll, ll>>;
using minpairpq = priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>;
#define all(vec) vec.begin(), vec.end();
#define forn(i, x, n) for (ll i = ll(x); i < ll(n); i++)

long long int mod = 1e9 + 7;

void solve(){
    string s; 
    cin >> s;
    ll n = s.length();

    ll result = 0,count=0;
    forn(i,1,n){
        if(s[i]==s[i-1])count++;
        else{
            result = max(result,count);
            count=0;
        }
    }
    result = max(result, count);
    cout<<result+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}