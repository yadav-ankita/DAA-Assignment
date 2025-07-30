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
   int n,k;cin>>n>>k;
   vector<pair<int,int>>arr(n);
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr[i]={x,i+1};
   }
     sort(arr.begin(),arr.end());
     int cnt=0;
     for(int i=0;i<n;i++){
        if(arr[i].first<=k && k>0){
             cnt++;
             k-=arr[i].first;
         }
     }
      if(cnt!=0){
          cout<<cnt<<endl;
       for(int i=0;i<cnt;i++){
           cout<<arr[i].second<<" ";
       }
      }
      if(cnt==0){
           cout<<"0";
       }
   return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
   // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}