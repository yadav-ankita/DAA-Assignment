#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool static compare(pair<int,int>&p1,pair<int,int>&p2){
       // if(p1.second==p2.second) return p1.first p2.first
        return p1.second>p2.second;
}
vector<int>topKFrequent(vector<int>& nums, int k) {
         vector<pair<int,int>>arr;
         int n=nums.size();
          map<int,int>mpp;
          for(int i=0;i<n;i++){
            mpp[nums[i]]++;
           }
          vector<pair<int,int>>freq(mpp.begin(),mpp.end());
          sort(freq.begin(),freq.end(),compare);
          vector<int>ans;
          for(int i=0;i<k;i++){
               ans.push_back(freq[i].first);
          }
          return ans;
    }
};
int main(){
      Solution obj;
      vector<int> nums = {1,1,1,2,2,3}; 
      int k = 2;
      vector<int> result = obj.topKFrequent(nums, k);
      cout << "Top " << k << " frequent elements are: ";
      for(int num : result){
        cout << num << " ";
       }
     cout << endl;

    return 0;
}