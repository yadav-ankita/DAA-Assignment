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
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int posf=0;
     int negf=0;
     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             cout<<arr[i]/2<<endl;
         }
         else{
              if(arr[i]>0){
                   if(posf){
                       cout<<(arr[i]+1)/2<<endl;
                       posf=0;
                   }
                   else{
                       cout<<arr[i]/2<<endl;
                       posf=1;
                   }
              }
              else{
                     if(negf){
                       cout<<(arr[i]-1)/2<<endl;
                       negf=0;
                   }
                   else{
                       cout<<arr[i]/2<<endl;
                       negf=1;
                   }
              }
         }
     }
   return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}