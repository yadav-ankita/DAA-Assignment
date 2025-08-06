//1278A-Shuffle Hashing on codeforces
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
     string p;cin>>p;
     string h;cin>>h;
     int lenP=p.length();
     int lenH=h.length();
     if(lenH<lenP){
         cout<<"NO"<<endl;
         return;
     }
    string temp=p;
    sort(temp.begin(),temp.end());
    for(int i=0;i<=lenH-lenP;i++){
         string random=h.substr(i,lenP);
         sort(random.begin(),random.end());
         
         if(random==temp) {
             cout<<"YES"<<endl;
             return;
         }
    }
    cout<<"NO"<<endl;
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