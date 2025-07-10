#include<bits/stdc++.h>
using namespace std;
vector<int>findMissingRepeatingNumbers(vector<int>&arr){
        // code here
        long long n=arr.size();
        long long s1n=(n*(n+1))/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s1=0;
        long long s2=0;
        for(int i=0;i<n;i++){
            s1+=arr[i];
            s2+=((long long)arr[i]*(long long)arr[i]);
        }
        long long val1=s1-s1n;
        long long val2=s2-s2n;
        val2=val2/val1;
        long long repeating=(val1+val2)/2;
        long long missing=repeating-val1;
        vector<int>ans(2,0);
        ans[0]=(int)repeating;
        ans[1]=(int)missing;
        return ans;
}
int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}