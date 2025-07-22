//2126 A. Only One Digit
#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
#define ll long long
using namespace std;
// bool comp(string&x,string&y){
//     return x.length()<y.length();
// }
void solve()
{
     int x;cin>>x;
     int ans=INT_MAX;
     while(x){
         int rem=x%10;
         ans=min(ans,rem);
         x/=10;
     }
     cout<<ans<<endl;
    return;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
   cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}