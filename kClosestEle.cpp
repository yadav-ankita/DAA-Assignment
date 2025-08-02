#include<bits/stdc++.h>
using namespace std;
  bool comp(pair<int,int>&p1,pair<int,int>&p2){
       if(p1.second == p2.second) return p1.first > p2.first;
        return p1.second<p2.second;
  }
vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        vector<pair<int,int>>closest;
        int n=arr.size();
        for(int i=0;i<n;i++){
             if(arr[i]>x) closest.push_back({arr[i],arr[i]-x});
             else closest.push_back({arr[i],x-arr[i]});
        }
        sort(closest.begin(),closest.end(),comp);
        vector<int>ans;
        int cnt=0;
        for(int i=0;cnt<k;i++){
           if(closest[i].second==0) continue;
           ans.push_back(closest[i].first);
           cnt++;
        }
        return ans;
    }
    int main(){
        vector<int>arr={12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
        int k=4,x=35;
        vector<int>ans=printKClosest(arr, k, x);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
