#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define fast_io ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2> &a) {in >> a.fr >> a.sc; return in;}
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) {out << a.fr << " " << a.sc; return out;}
template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}
 
 
signed main() {
	fast_io;
	int n;
	cin >> n;
	int x[n], y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int area = 0;
	for (int i = 0; i < n; i++) {
		int j = i + 1;
		if (i == n - 1) j = 0;
 
		area += (y[j] + y[i]) * (x[i] - x[j]);
 
	}
	cout << abs(area) << endl;
}
