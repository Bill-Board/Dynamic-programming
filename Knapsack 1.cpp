//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
ll Wi,w[N], v[N], dp[110][N];

ll alabu(int n, int k){
    if(n < 1) return 0ll;
    ll &ans = dp[n][k];
    if(ans != -1) return ans;
    if(k >= w[n])
        ans = max(ans, v[n] + alabu(n-1, k - w[n]));
    ans = max(ans, alabu(n-1, k));
    return ans;
}


void solve(int tc)
{
    int n; cin >> n >> Wi;
    for(int i = 1; i<=n; i++)
        cin >> w[i] >> v[i];

//    memset(dp, -1, sizeof(dp));
//    cout << alabu(n, Wi) << '\n';

    for(int i = 1; i<=n; i++){
        for(int j = 0; j <= Wi; j++){
            if(j >= w[i])
                dp[i][j] = v[i] + dp[i-1] [j - w[i]];
            dp[i][j] = max(dp[i][j], dp[i-1][j] );
        }
    }
    cout << dp[n][Wi] << '\n';
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
