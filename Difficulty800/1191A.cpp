/// Problem Name: Tokitsukaze and Enhancement
/// Problem Link: https://codeforces.com/problemset/problem/1191/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	if (n%4==0)printf("1 A\n");
	if (n%4==1)printf("0 A\n");
	if (n%4==2)printf("1 B\n");
	if (n%4==3)printf("2 A\n");
	return 0;
}
