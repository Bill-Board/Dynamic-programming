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

void solve(int tc)
{
    string s, t; cin >> s >> t;
    if(s.back() != t.back()) {
        if(s.back()>t.back())
            cout << "<\n";
        else
            cout << ">\n";
    }
    else if(s.back() == 'S'){
        int cnt = 0;
        for(auto i: s)
            cnt += i=='X';
        for(auto i: t)
            cnt -= i=='X';
        if(cnt == 0)
            cout << "=\n";
        else if(cnt>0)
            cout << "<\n";
        else
            cout << ">\n";
    }
    else{
        int cnt = 0;
        for(auto i: s)
            cnt += i=='X';
        for(auto i: t)
            cnt -= i=='X';
        if(cnt == 0)
            cout << "=\n";
        else if(cnt>0)
            cout << ">\n";
        else
            cout << "<\n";
    }
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
