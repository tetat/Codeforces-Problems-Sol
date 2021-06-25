/// Problem Name: Game with string
/// Problem Link: https://codeforces.com/problemset/problem/1104/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s;cin >> s;
    int res = 0,len = s.size();
    for (int i = 1;i < len && len;i++){
        if (s[i]==s[i-1]){
            res++;
            s.erase(s.begin()+i-1);
            s.erase(s.begin()+i-1);
            i-=2;len = s.size();//cout << s << endl;
        }
    }
    if (res&1)puts("YES");
    else puts("NO");
    return 0;
}
