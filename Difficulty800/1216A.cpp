/// Problem Name: Prefixes
/// Problem Link: https://codeforces.com/problemset/problem/1216/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n, cng = 0;
	string s;
	cin >> n >> s;
	for (int i = 1;i < n;i += 2){
		if (s[i] == s[i-1]){
			if (s[i] == 97)s[i] = 98;
			else s[i] = 97;
			cng++;
		}
	}
	cout << cng << '\n' << s << '\n';
	return 0;
}
