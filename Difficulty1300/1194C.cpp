/// Problem Name: From S To T
/// Problem Link: https://codeforces.com/problemset/problem/1194/C

#include <bits/stdc++.h>
using namespace std;

bool check(string s, string t, int ls, int lt)
{
    int i = 0, j = 0;
    while (true){
        if (i==ls)return true;
        if (j==lt)return false;
        if (s[i]==t[j])i++,j++;
        else j++;
    }
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--){
		int a[125] = {0};
		int b[125] = {0};
		int c[125] = {0};
		string s, t, p;
		cin >> s >> t >> p;
		int ls = s.size();
		int lt = t.size();
		int lp = p.size();
        if (check(s, t, ls, lt) == false){
            puts("NO");
            continue;
        }
		for (int i = 0;i < ls;i++){
            a[(int)s[i]]++;
        }
        for (int i = 0;i < lt;i++){
            b[(int)t[i]]++;
        }
        for (int i = 0;i < lp;i++){
            c[(int)p[i]]++;
        }
        bool res = true;
        for (int i = 97;i < 123;i++){
            if (a[i]+c[i] < b[i]){
                res = false;
                break;
            }
        }
		res?puts("YES"):puts("NO");
	}
	return 0;
}
 
