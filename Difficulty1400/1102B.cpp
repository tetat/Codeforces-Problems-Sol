/// Problem Name: Array K-Coloring
/// Problem Link: https://codeforces.com/problemset/problem/1102/B

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

class color {
    public:
	int num, serial;
};
bool cmpn(color a, color b){
	return a.num < b.num;
}
bool cmps(color a, color b){
	return a.serial < b.serial;
}
int input[5010], ma;
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	color a[n+1];
	for (int i = 0;i < n;i++){
		scanf("%d", &a[i].num);
		a[i].serial = i;
		input[a[i].num]++;
		ma = max(ma, input[a[i].num]);
	}
	if (k < ma)return puts("NO"), 0;
	sort(a, a+n, cmpn);
	for (int i = 0;i < n;i++){
		a[i].num = i % k + 1;
	}
	sort(a, a+n, cmps);
	puts("YES");
	for (int i = 0;i < n;i++){
		printf("%d ", a[i].num);
	}puts("");
	return 0;
}
