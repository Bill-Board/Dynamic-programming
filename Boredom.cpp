//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<ll,ll>;

const int N=200005;
ll mod= 1e9+7;
ll dp[N][2];
vector<pii> a;
ll alabu(int ind, int pick, int last){
    if(ind < 0) return 0ll;
    ll &ans = dp[ind][pick];
    if(ans != -1) return ans;
    if(!pick or 1 < abs(a[ind].second - last))
        ans = max(a[ind].first + alabu(ind - 1, true, a[ind].second), alabu(ind - 1, false, a[ind].second));
    else
        ans = max(alabu(ind - 1, false, a[ind].second), 0ll);
    return ans;
}

void solve(int tc)
{
    int n; cin >> n;
    map<ll, ll> mpp;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        mpp[x]+=x;
    }
    a.push_back({0,-1});
    for(auto i: mpp)
        a.push_back({i.second, i.first});
    n = a.size() - 1;
    for(int i = 1; i<=n; i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        if(a[i-1].second + 1 != a[i].second)
            dp[i][1] = a[i].first + max(dp[i-1][0], dp[i-1][1]);
        else
            dp[i][1] = a[i].first + dp[i-1][0];
    }

    cout << max(dp[n][1], dp[n][0]) << '\n' ;
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
