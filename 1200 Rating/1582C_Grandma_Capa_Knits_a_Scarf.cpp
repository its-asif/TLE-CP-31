#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    int n; cin >> n;
	    string s; cin >> s;

	    int ans = INT_MAX;
        for (int i = 0; i < 26; ++i) {
            int st = 0, end = n - 1, cnt = 0;
            while (st <= end) {
                if (s[st] == s[end]) st++, end--;
                else if (s[end] == char('a' + i)) cnt++, end--;
                else if (s[st]  == char('a' + i)) cnt++,  st++;
                else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }

        if (ans > n ) cout << -1 << endl;
        else cout << ans << endl;
	}
	return 0;
}