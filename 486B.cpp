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
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n, 0));
    vector<int> row, cols;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                row.push_back(i);
                cols.push_back(j);
            }
        }
    }
    vector<vector<int>> brr(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++)
    {
        auto idx = find(row.begin(), row.end(), i);
        if (idx != row.end())
        {
            for (int j = 0; j < n; j++)
            {
                brr[i][j] = 0;
            }
        }
    }
    int i = 0, j = 0;
    while (j < n)
    {
        auto idx = find(cols.begin(), cols.end(), j);
        if (idx != cols.end())
        {
            while (i < m)
            {
                brr[i][j] = 0;
                i++;
            }
            i = 0;
        }
        j++;
    }
    //cout << "brr array is" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[i][j] == -1)
            {
                brr[i][j] = 1;
            }
            //cout << brr[i][j] << " ";
        }
        //cout << endl;
    }
    vector<vector<int>> original(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
             int ans = 0;
            for (int k = 0; k < n; k++)
            {
                if(brr[i][k]==1) ans=1;
            }
            for (int l = 0; l < m; l++)
            {
               if(brr[l][j]==1) ans=1;
            }
            original[i][j] = ans;
        }
    }
    // cout << "original array after decriptin the brr" << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << original[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if(original==arr){
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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