//1373-A  Donut Shops on Codeforces
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
    ll a,b,c;
    cin>>a>>b>>c;
    ll x1=-1,x2=-1;
    if(a<c){
        x1=1;
    }
    if(b*a>c){
        x2=b;
    }
    cout<<x1<<" "<<x2<<endl;
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