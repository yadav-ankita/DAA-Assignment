// 139A-Petr and Book - On Codeforces
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sumUpTo(int i){
    return i*(i+1)/2;
}
void solve(){
   int n;cin>>n;
   vector<int>days(7);
   for(int i=0;i<7;i++){
       cin>>days[i];
   }
   int i=0;
   int total=n;
   while(total>0){
       total-=days[i++];
       i%=7;
      }
      if(i==0) cout<<7<<endl;
       else cout<<i<<endl;
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