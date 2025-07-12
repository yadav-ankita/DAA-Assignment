#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sumUpTo(int i){
    return i*(i+1)/2;
}
void solve(){
    int n,m;cin>>n>>m;
    int cnt=-1;
    if(m%n==0){
         cnt=0;
         int d=m/n;
         while(d%2==0){
             d/=2;
             cnt++;
         }
         while(d%3==0){
             d/=3;
             cnt++;
         }
         if(d!=1){
             cnt=-1;
         }
    }
   cout<<cnt<<endl;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
