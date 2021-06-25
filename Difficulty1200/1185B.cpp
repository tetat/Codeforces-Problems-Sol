/// Problem Name: Email from Polycarp
/// Problem Link: https://codeforces.com/problemset/problem/1185/B

#include <bits/stdc++.h>
using namespace std;
#define en '\0'

int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0, j = 0;
        bool flag = true;
        if (s1.size() > s2.size()){
            puts("NO");
            continue;
        }
        while (s1[i]!=en && s2[j]!=en){
            if (s1[i] != s2[j]){
                flag = false;
                break;
            }
            int cnt1 = 0, cnt2 = 0;
            char ch = s1[i];
            while (ch == s1[i])i++, cnt1++;
            while (ch == s2[j])j++, cnt2++;
            if (cnt1 > cnt2){
                flag = false;
                break;
            }
        }
        if (s1[i] == en)i--;
        if (s2[j] == en)j--;
        if (s1[i]!=s2[j])flag = false;
        flag?puts("YES"):puts("NO");
    }
    return 0;
}
