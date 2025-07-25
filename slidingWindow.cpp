#include<bits/stdc++.h>
using namespace std;
int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int minLen=1e9;
        int maxEle=*max_element(nums.begin(),nums.end());
        if(maxEle>=k) return 1;
        else{
               for(int i=0;i<n;i++){
                 int   Or=0;
                    for(int j=i;j<n;j++){
                         Or=Or|nums[j];
                         if(Or>=k){
                              minLen=min(minLen,j-i+1);
                              break;
                         }
                    }
               }
        }
        return minLen==1e9?-1:minLen;
}
int main(){
         vector<int>nums={1,2,3};
         int k=2;
         int minLenWithOr=minimumSubarrayLength(nums,k);
         cout<<"The length of the shortest special non-empty subarray of nums "<<minLenWithOr<<endl;
         return 0;
}
