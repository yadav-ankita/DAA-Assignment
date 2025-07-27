//2760. Longest Even Odd Subarray With Threshold on leetcode
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                int cnt=1;
                while(++i<n && nums[i]<=threshold && nums[i-1]%2!=nums[i]%2) cnt++;
                res=max(res,cnt);
                i--;
            }
        }
        return res;
    }
int main(){
     vector<int>nums={3,2,5,4};
     int threshold=5;
     int ans=longestAlternatingSubarray(nums,threshold);
     cout<<"Longest Even Odd Subarray With Threshold is  "<<ans<<endl;
     return 0;
}