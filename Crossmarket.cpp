//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;

void solve(int tc)
{
    ll n, m;cin >> n >> m;
    if(n == 1 and m==1){
        cout << 0 << '\n';
        return;
    }
    if(n==1 or m==1){
        cout << max(n,m)<< '\n';
        return;
    }
    ll ans1 = (n+m-2) +m ;
    ll ans2 = (n+m-2) +n;
    cout << min(ans1, ans2) << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
