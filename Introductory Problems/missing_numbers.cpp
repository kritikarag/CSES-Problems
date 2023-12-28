// https://cses.fi/problemset/task/1083

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

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    forn(i,0,n-1){
        ll x;
        cin>>x;
        sum+=x;
    }
    ll missing = (n*(n+1))/2 - sum;
    cout<<missing<<endl;
}

int main()
{
    solve();
}