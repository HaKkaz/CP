#pragma GCC optimize("Ofast", "unroll-loops", "fast-math")
#include<bits/stdc++.h>
#define int long long
using namespace std;
#define fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define _ <<' '<<
#define ALL(v) v.begin(),v.end()
#define ft first
#define sd second
#define tiii tuple<int,int,int>
using ll = long long;
using ld = long double;
using pii = pair<int,int>;

signed main(){
	fast;
	int n; cin >> n ;
	int ans = 0  ;
	vector<int> hav(4,0);
	for(int i=0 ; i<n ; ++i){
		hav[0]++;
		int x; cin >> x;
		for(int j=3 ; j>=0 ; --j){
			if(j + x >= 4){
				ans += hav[j];
			}
			else{
				hav[j + x] += hav[j];
			}
			hav[j] = 0;
		}
	}
	cout << ans << '\n';
}