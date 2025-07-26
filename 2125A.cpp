//2125 - A. Difficult Contest on codeforces
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
    string s;
    cin>>s;
    string temp=s;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;
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