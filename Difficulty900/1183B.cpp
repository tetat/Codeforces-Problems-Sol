/// Problem Name: Equalize Prices
/// Problem Link: https://codeforces.com/problemset/problem/1183/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int n, k;
		scanf("%d %d", &n, &k);
		int mn = INT_MAX;
		int mx = 0;
		for (int i = 0;i < n;i++){
			int in;
			scanf("%d", &in);
			mn = in<mn?in:mn;
			mx = in>mx?in:mx;
		}
		mn += k;
		(mx-mn)>k?puts("-1"):printf("%d\n", mn);
	}
	return 0;
}
