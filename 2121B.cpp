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
     int n;
     string  s;
     cin>>n>>s;
     int freq[26]={0};
     for(int i=0;i<n;i++){
         freq[s[i]-'a']++;
     }
     for(int i=1;i<n-1;i++){
         if(freq[s[i]-'a']>1){
             cout<<"YES\n";
             return;
         }
     }
     cout<<"NO\n";
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