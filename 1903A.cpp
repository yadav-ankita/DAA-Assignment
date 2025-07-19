// 1903A - Halloumi Boxes on Codeforces
#include<bits/stdc++.h>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;
void solve(){
   int n,k;cin>>n>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   if(k>=2){
       cout<<"YES"<<endl;
   }
   else if(k==1){
       if(is_sorted(arr.begin(),arr.end()))
       {
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
 return;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
      solve();
  }
   return 0;
}