// link to problem https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/lex-finds-beauty-0d0bc1b6/

#include<iostream>
#include<algorithm>
using namespace std;

#define forn(i,n) for(int i = 0; i < n; i++)
#define ln endl

typedef long long ll;

int main(){

	int n,k;
	cin>>n>>k;
	ll a[n];
	ll ans = 0;
	ll tot = 0;
	forn(i,n){
		cin>>a[i];
		tot += a[i];
	}
	sort(a,a+n,greater<ll>());
	forn(i,n){
		if(a[i]<a[k-1]) break;
		ans += a[i];
	}
	cout<<tot-ans<<ln;
	return 0;
}