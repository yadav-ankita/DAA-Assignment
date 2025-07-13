//Weekely Contest 458(Leetcode)
//Q1.Process String with Special Operations I
#include <bits/stdc++.h>
using namespace std;
    string processStr(string s) {
        string result="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z') result+=s[i];
            else if(s[i]=='#') result+=result;
            else if(s[i]=='*'){
                if(!result.empty()){
                int size=result.length();
                result.erase(result.begin()+size-1);}
            }
            else if(s[i]=='%'){
                  reverse(result.begin(),result.end());
            }
        }
        return result;
    }
int main(){
     string s="";
     cout<<"Enter the String"<<endl;
     cin>>s;
     string ans=processStr(s);
     if(ans.size()==0){
        cout<<"\"\"";
        return 0;
     }
     cout<<"By Processing String with Special Operation:"<<ans;
    return 0;
}