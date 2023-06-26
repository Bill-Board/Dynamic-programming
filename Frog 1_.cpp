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
int dp[N], a[N];

int alabu(int n){
    int &ans = dp[n];
    if(ans != -1)return ans;
    ans = INT_MAX;
    if(n-1>0){
        ans = min(ans,  abs(a[n] - a[n-1]) + alabu(n-1));
    }
    if(n-2>0){
        ans = min(ans, abs(a[n] - a[n-2]) + alabu(n-2));
    }
    return ans;
}


void solve(int tc)
{
    int n; cin >> n;
    memset(dp, -1, sizeof(dp));
    dp[0] = dp[1] = 0;
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    //cout << alabu(n) << '\n';
    dp[2] = abs(a[1]-a[2]);
    for(int i = 3; i<=n; i++){
        int ans1 = dp[i-1] + abs(a[i] - a[i-1]);
        int ans2 = dp[i-2] + abs(a[i] - a[i-2]);
        dp[i] = min(ans1, ans2);
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
