/*
        Codeforces Round 861 (Div. 2)
        Codeforces 1808B
        B. Playing in a Casino
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define testcase ll t; cin>>t; while(t--)
#define endl '\n'

int main(){
    testcase{
        int n,m; cin>>n>>m;
        vector<vector<int> > v(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x; cin>>x;
                v[j].push_back(x);
            }
        }
        for (int i = 0; i < m; i++)
        {
            sort(v[i].begin(), v[i].end());
        }
        
        ll sum=0;
        for (int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++){
                sum+= (ll)v[i][j]*j;
                sum -= (ll)v[i][j]* (n-1-j);
            }
        }
        
        cout<<sum<<endl;
    }
}