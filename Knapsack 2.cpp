//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 100005;
const ll inf = 1e18;
ll mod= 1e9+7;
ll n, W, v[102], w[102], dp[112][N+9];

ll alabu(int n, int c){
    if( n<0 || c<0)return inf-5;

    ll &ans = dp[n][c];
    if(ans != inf) return ans;
    if(v[n] <= c)
        ans = min(ans, alabu(n-1, c - v[n]) + w[n]);
    return ans= min(ans, alabu(n-1, c));
}

void solve(int tc)
{
    cin >> n >> W;
    int sum = 0;
    for(int i = 1; i<=n; i++)
        cin >> w[i] >> v[i], sum += v[i];

    for(int i = 0; i<103; i++)
        for(int j = 0; j<=sum ; j++)
            dp[i][j] = inf;
    dp[0][0] = 0;
//    for(int i = 0; i<=sum ; i++)
//        dp[n][i] = alabu(n, i);

    for(int i = 1; i<=n; i++){
        for(int j = 0; j<=sum ; j++){
            ll &ans = dp[i][j];
            if(v[i] <= j)
                ans = min(ans , dp[i-1][j - v[i]] + w[i]);
            ans = min(ans, dp[i-1][j]);
        }
    }


    ll cr_h = -1;
    for(ll i = 1; i<=sum ; i++)
        if(dp[n][i] <= W)
            cr_h = max(cr_h , i);
    cout << cr_h << '\n';
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
