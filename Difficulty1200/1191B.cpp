/// Problem Name: Tokitsukaze and Mahjong
/// Problem Link: https://codeforces.com/problemset/problem/1191/B

#include <bits/stdc++.h>
using namespace std;

struct data{
	char ch;
	int n;
};

bool cmp0(data a, data b){
	return a.ch < b.ch;
}

bool cmp1(data a, data b){
	return a.n < b.n;
}

int ab(int n){
	return n<0?-1*n:n;
}

int main()
{
	data a[4];
	for (int i = 0;i < 3;i++){
		string s;
		cin >> s;
		a[i].n = s[0]-48;
		a[i].ch = (char)s[1];
	}
	sort(a, a+3, cmp0);
	if (a[0].ch == a[2].ch){
		sort(a, a+3, cmp1);
		if (a[0].n == a[2].n || (a[2].n-a[1].n == 1 && a[1].n-a[0].n == 1))puts("0");
		else if (a[2].n-a[1].n == 1 || a[1].n-a[0].n == 1 || a[0].n==a[1].n || a[1].n==a[2].n || a[2].n-a[1].n == 2 || a[1].n-a[0].n == 2)puts("1");
		else puts("2");
	}
	else if ((a[0].ch==a[1].ch && (ab(a[1].n-a[0].n) == 1 || ab(a[1].n-a[0].n) == 2)) || (a[1].ch==a[2].ch && (ab(a[2].n-a[1].n) == 1 || ab(a[2].n-a[1].n) == 2)))puts("1");
	else if ((a[0].ch==a[1].ch && a[1].n==a[0].n) || (a[1].ch==a[2].ch && a[2].n==a[1].n))puts("1");
	else puts("2");
	return 0;
}
