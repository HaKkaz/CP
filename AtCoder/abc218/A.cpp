#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
#define ft first
#define sd second
#define ALL(v) v.begin(),v.end()
#define fast ios::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define cerr if(0);else cerr
#define _ << ' ' << 

int main(){
	fast;
	int n;
	string s;
	cin >> n >> s;
	cout << (s[n-1] == 'o' ? "Yes" : "No");
}

