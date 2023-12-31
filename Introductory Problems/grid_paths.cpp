//

#include <bits/stdc++.h>
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
v1i dir = {0,-1,0,1,0};
unordered_map<char,pair<ll,ll>>mp;



void solve(){
    string s; 
    cin >> s;
    mp['D'] = {1, 0};
    mp['R'] = {0, 1};
    mp['L'] = {0,-1};
    mp['U'] = {-1,0};

    ll n = s.length();

    v2i vis(7,v1i(7,false));

    if(s[0]=='?'){

    }
}

int main(){
    solve();
    return 0;
}