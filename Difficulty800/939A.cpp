/// Problem Name: Love Triangle
/// Problem Link: https://codeforces.com/problemset/problem/939/A

#include <cstdio>
#include <vector>
#include <utility>
#include <set>
using namespace std;

vector <int> v;
int it = 1, cnt = 0;
int found = 0;

void dfs(int idx){
	if (idx == it){
		if (cnt != 2)return;
		else {found = 1;return;}
	}
	if (cnt > 2)return;
	cnt++;
	dfs(v[idx]);
}

int main()
{
	int n, el;
	scanf("%d", &n);
	v.push_back(0);
	for (int i = 0;i < n;i++){
		scanf("%d", &el);
		v.push_back(el);
	}
//	for (int i = 0;i <= n;i++){
//		printf("%d ", v[i]);
//	}puts("");
	for ( ;it <= n;it++){
		if (v[it] != it)dfs(v[it]);
		if (found){
			puts("YES");
			return 0;
		}
		cnt = 0;
	}
	puts("NO");
	return 0;
}
