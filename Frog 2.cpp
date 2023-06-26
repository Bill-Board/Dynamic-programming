//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=100005;
ll mod= 1e9+7;
/// recursive
int k, dp[N], a[N];

int alabu(int n){
    int &ans = dp[n];
    if(ans != -1)return ans;
    ans = INT_MAX;
    for(int i = 1; i<=k; i++)
        if(n - i> 0)
            ans = min(ans,  abs(a[n] - a[n-i]) + alabu(n-i));
    return ans;
}


void solve(int tc)
{
    int n;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    dp[0] = dp[1] = 0;
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    //cout << alabu(n) << '\n';
    for(int i = 2; i<=n; i++){
        int ans = INT_MAX;
        for(int j = 1; j<=k; j++)
            if(i - j> 0)
                ans = min(ans, dp[i -j] + abs(a[i] - a[i-j]) );
        dp[i] = ans;
    }
    cout << dp[n] << '\n';

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
