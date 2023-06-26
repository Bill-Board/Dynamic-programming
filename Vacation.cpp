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

int a[N][3], dp[N][4];

int alabu(int n, int k){
    if(n==1)
        return a[n][k];

    int &ans = dp[n][k];
    if(ans != -1) return ans;

    ans = a[n][k] + max(alabu(n-1,(k+1)%3), alabu(n-1,(k+2)%3));

    return ans;
}

void solve(int tc)
{
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<3; j++)
            cin >> a[i][j];
    }

    memset(dp, -1, sizeof(dp));
    int ans = 0;
    for(int i = 0; i<3; i++)
        ans = max(ans, alabu(n,i));
    cout << ans << '\n';

//    for(int i = 1; i<=n; i++){
//        for(int j = 0; j<3; j++)
//            dp[i][j] = a[i][j] + max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]);
//    }
//
//    int ans = 0;
//    for(int i = 0; i<3; i++)
//        ans = max(ans, dp[n][i]);
//    cout << ans << '\n';

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
