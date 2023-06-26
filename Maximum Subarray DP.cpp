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

int alabu(vector<int> &nums, int ind, bool pick, vector<vector<int>> &dp){
    if(nums.size() <= ind) return pick ? 0 : -1e5;
    int &ans = dp[pick][ind];
    if(ans != -1) return ans;
    if(pick) return ans = max(0, nums[ind] + alabu(nums, ind+1, true, dp));
    return ans = max(nums[ind] + alabu(nums, ind+1, true, dp), alabu(nums, ind+1, false, dp));
}

int maxSubArray(vector<int>& nums) {
    vector<vector<int>> dp(2, vector<int>(nums.size(), -1));
    return alabu(nums, 0, false, dp);
}

void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i: a)
        cin >> i;
    cout << maxSubArray(a) << '\n';
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
