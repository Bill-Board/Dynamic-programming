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
int dp[N];

int alabu(int n){
    int &ans = dp[n];
    cout << "n " << n << " " << ans << '\n';
    if(ans != -1) return ans;
    ans  = alabu(n-1) + 1;
    if(n % 2 == 0)
        ans = min(ans, alabu(n/2) + 1);
    if(n % 3 == 0)
        ans = min(ans, alabu(n/3) + 1);
    return ans;
}


void solverecursive(int tc)
{
    int n; cin >> n;
    memset(dp, -1, sizeof(dp));
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 0; i<10; i++)
        cout << dp[i] << " \n"[i==9];
    cout << alabu(n) << '\n';
}

void solve_iteratve(int tc){
    int n; cin >> n;
    vector<int> dp1(n+2);
    dp1[2] = dp1[3] = 1;

    for(int i = 4; i<=n; i++){
        dp1[i] = dp1[i-1] + 1;
        if(i % 2 == 0)
            dp1[i] = min(dp1[i], dp1[i/2] + 1);

        if(i % 3 == 0)
            dp1[i] = min(dp1[i], dp1[i/3] + 1);
    }
    cout << dp1[n] << '\n';
}


signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve_iteratve(i);
    return 0;
}



///  Alhamdulillah...
